//
//  UIPickerView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPickerView,UIPickerView *);

@interface UIPickerView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPickerView, UIPickerView *);
TF_EC_MINSTANCE_INT(UIPickerView,UIPickerView *);


TF_EC_CHAIN_PROP_INT(UIPickerView ,id<UIPickerViewDataSource>,dataSource);
TF_EC_CHAIN_PROP_INT(UIPickerView ,id<UIPickerViewDelegate>,delegate);
TF_EC_CHAIN_PROP_INT(UIPickerView ,BOOL,showsSelectionIndicator);


@end