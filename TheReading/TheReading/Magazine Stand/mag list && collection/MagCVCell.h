//
//  MagCVCell.h
//  PublicLibrary
//
//  Created by grenlight on 13-12-4.
//  Copyright (c) 2013年 grenlight. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OWKit/OWKit.h>
#import <LYService/LYService.h>
#import <OWKit/OWBottomAlignImageView.h>

@class LYMagazineTableCellData;

@interface MagCVCell : OWShakeableCVCell
{
    //__weak IBOutlet OWBottomAlignImageView  *webImageView;
    //__weak IBOutlet UILabel    *titleLB, *issueLB;
    
    UIButton    *deleteButton;

}
@property (strong, nonatomic) IBOutlet OWBottomAlignImageView *webImageView;
- (void)setContent:(LYMagazineTableCellData *)info ;
- (CGRect)getCoverFrame;
- (UIImage *)getCover;
@property (nonatomic) BOOL isEditShelf;
@property (nonatomic) BOOL isEditAttention;
@property (nonatomic) BOOL isCheckedForShelf;

@end
