@class NSString;

@interface WFDeferredMenuElementGroup : NSObject <WFMenuElement, WFMenuElementGroup>

@property (readonly, nonatomic) id /* block */ itemProvider;
@property (nonatomic) long long estimatedItemCount;
@property (nonatomic) char mayContainSelectedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) char onlyDisplayTitleWhenCollapsed;

@end
