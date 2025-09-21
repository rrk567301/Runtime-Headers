@class AXFUIElement;

@interface SCRGarageBandScrollArea : SCRScrollArea

@property (nonatomic) char _containsTimeLineGroups;
@property (retain, nonatomic) AXFUIElement *_currentTimeLineGroup;

- (void).cxx_destruct;
- (char)addSelectedChildrenDescriptionToRequest:(id)a0 onlyAnnounceSelectedCount:(char)a1;
- (char)handleNavigationEvent:(id)a0 request:(id)a1 commandKey:(id)a2 selector:(SEL)a3 canScroll:(char)a4 canWrap:(char)a5;
- (void)handleSelectionChange:(id)a0;
- (char)isChildScrollable:(id)a0;
- (char)moveToLinkedItemWithEvent:(id)a0 andInteract:(char)a1 request:(id)a2 fallbackToNextSpot:(char)a3;
- (void)setFocusedChild:(id)a0;
- (void)setIsEventHandler:(char)a0 isKeyboardHandler:(char)a1;
- (char)shouldPromoteUIElement:(id)a0;

@end
