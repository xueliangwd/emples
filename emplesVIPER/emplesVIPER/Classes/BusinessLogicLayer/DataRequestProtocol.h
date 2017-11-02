//
//  DataRequestProtocol.h
//  emplesMVC
//
//  Created by Vasily Popov on 10/28/17.
//  Copyright © 2017 Vasily Popov. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol DataRequestProtocol <NSObject>

-(void) doRequestToFetchAllAreaWithResponseBlock:(ContentResponseBlock)block;
-(void) doRequestToFetchAllAddressWithResponseBlock:(ContentResponseBlock)block;
@end
