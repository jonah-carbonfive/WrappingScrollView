//
//  WrappingScrollViewViewController.h
//  WrappingScrollView
//
//  Created by Jonah Williams on 8/20/10.
//  Copyright 2010 Jonah Williams.
//

#import <UIKit/UIKit.h>
#import "WrappingScrollView.h"

@interface WrappingScrollViewViewController : UIViewController {

}

@property(nonatomic, retain) IBOutlet WrappingScrollView *scrollView;

- (IBAction)action:(id)sender forEvent:(UIEvent *)event;

@end

