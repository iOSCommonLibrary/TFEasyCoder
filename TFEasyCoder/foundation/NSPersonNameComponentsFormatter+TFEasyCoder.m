//
//  NSPersonNameComponentsFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSPersonNameComponentsFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSPersonNameComponentsFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSPersonNameComponentsFormatter, NSPersonNameComponentsFormatter *);
TF_EC_MINSTANCE_IMP(NSPersonNameComponentsFormatter, NSPersonNameComponentsFormatter *);


TF_EC_CHAIN_PROP_IMP(NSPersonNameComponentsFormatter ,long long,style)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponentsFormatter ,BOOL,phonetic)

@end