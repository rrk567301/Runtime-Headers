@class NSString;

@interface WFPlatformMenu : WFFilteringMenu <WFFilteringMenuDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateStatus;
- (void)filterItems:(id)a0 inMenu:(id)a1 forSearchString:(id)a2;

@end
