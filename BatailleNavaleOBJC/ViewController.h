//
//  ViewController.h
//  BatailleNavaleOBJC
//
//  Created by ios02 on 06/08/2015.
//  Copyright (c) 2015 CGIA. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *affichageCoups;
@property (weak, nonatomic) IBOutlet UILabel *affichageScore;

@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *boutonsGrille;

- (IBAction)touchDownGrille:(UIButton *)sender;


@end

