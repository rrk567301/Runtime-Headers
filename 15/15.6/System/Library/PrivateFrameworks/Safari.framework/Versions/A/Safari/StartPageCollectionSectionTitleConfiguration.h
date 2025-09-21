@class NSString;

@interface StartPageCollectionSectionTitleConfiguration : NSObject <StartPageCollectionSectionTitleMutableConfiguration, NSCopying>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *accessibilityLabel;
@property (readonly, copy, nonatomic) id /* block */ popUpAction;
@property (readonly, copy, nonatomic) id /* block */ trailingAccessoryViewProvider;
@property (readonly, copy, nonatomic) id /* block */ secondaryTrailingAccessoryViewProvider;
@property (readonly, nonatomic) char canGoBack;
@property (readonly, nonatomic) char usesCustomShowMore;
@property (readonly, nonatomic) char canCollapseSection;
@property (readonly, nonatomic) char isSectionCollapsed;
@property (readonly, nonatomic) char showsProfileIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationWithValues:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)_copy;
- (void)setAccessibilityLabel:(id)a0;
- (id)configurationByModifyingValues:(id /* block */)a0;
- (void)setPopUpAction:(id /* block */)a0;
- (id)makeSecondaryTrailingAccessoryView;
- (id)makeTrailingAccessoryView;
- (void)setCanCollapseSection:(char)a0;
- (void)setCanGoBack:(char)a0;
- (void)setIsSectionCollapsed:(char)a0;
- (void)setSecondaryTrailingAccessoryViewProvider:(id /* block */)a0;
- (void)setShowsProfileIcon:(char)a0;
- (void)setTrailingAccessoryViewProvider:(id /* block */)a0;
- (void)setUsesCustomShowMore:(char)a0;

@end
