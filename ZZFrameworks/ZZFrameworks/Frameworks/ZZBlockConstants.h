//
//  ZZBlockConstants.h
//  ZZFrameworks
//
//  Created by Jason on 2018/11/28.
//  Copyright © 2018 Jason. All rights reserved.
//

#ifndef ZZBlockConstants_h
#define ZZBlockConstants_h

typedef void (^zz_block_void)(void);
typedef void (^zz_block_bool)(BOOL);
typedef void (^zz_block_object)(id);
typedef void (^zz_block_int)(int);
typedef void (^zz_block_float)(float);
typedef void (^zz_block_object_object)(id, id);
typedef void (^ModelLoadDataCompleteBlock)(NSError *);

#endif /* ZZBlockConstants_h */
