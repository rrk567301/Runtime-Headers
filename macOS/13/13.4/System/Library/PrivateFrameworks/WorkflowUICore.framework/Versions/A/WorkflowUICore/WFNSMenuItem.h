@class WFMenuItem, WFMenuItemView, NSString;

@interface WFNSMenuItem : NSMenuItem <WFPlatformMenuItem>

@property (retain, nonatomic) WFMenuItem *wfMenuItem;
@property (retain, nonatomic) WFMenuItemView *wfMenuItemView;
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) BOOL shouldShowState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;

@end
