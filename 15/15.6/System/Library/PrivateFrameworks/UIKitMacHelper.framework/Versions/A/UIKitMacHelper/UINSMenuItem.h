@class NSString, NSDictionary, UIMenuElement, RVItem;
@protocol UINSMenu, UIRVPresenterHighlightDelegate;

@interface UINSMenuItem : NSObject <UINSMenuItem>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *keyEquivalent;
@property (nonatomic) unsigned long long keyEquivalentModifiers;
@property (nonatomic, getter=isAlternate) char alternate;
@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic, getter=isSeparatorItem) char separatorItem;
@property (nonatomic, getter=isReplacedBySubmenuItems) char replacedBySubmenuItems;
@property (nonatomic) long long state;
@property (nonatomic) long long type;
@property (weak, nonatomic) id initialTarget;
@property (readonly, nonatomic) char initialTargetWasNonNil;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSDictionary *validatedProperties;
@property (retain, nonatomic) id<UINSMenu> submenu;
@property (weak, nonatomic) id<UINSMenu> parentMenu;
@property (weak, nonatomic) id target;
@property (copy, nonatomic) NSString *actionName;
@property (retain, nonatomic) RVItem *rvItem;
@property (retain, nonatomic) id<UIRVPresenterHighlightDelegate> rvHighlighter;
@property (copy, nonatomic) UIMenuElement *sourceUIMenuElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)separatorItem;

- (void).cxx_destruct;

@end
