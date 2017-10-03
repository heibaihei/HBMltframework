//
//  main.cpp
//  HBMltframework
//
//  Created by zj-db0519 on 2017/9/29.
//  Copyright © 2017年 meitu. All rights reserved.
//

#include <iostream>

#include "MltProfile.h"
#include "MltFactory.h"
#include "MltProducer.h"
#include "MltConsumer.h"

using namespace Mlt;

int main(int argc, const char * argv[]) {
    
    Factory::init( NULL );
    Profile profile;
    Producer producer( profile, argv[ 1 ] );
    Consumer consumer( profile, "xgl" );
    consumer.set( "rescale", "none" );
    consumer.connect( producer );
    consumer.run( );
    
    return 0;
}
