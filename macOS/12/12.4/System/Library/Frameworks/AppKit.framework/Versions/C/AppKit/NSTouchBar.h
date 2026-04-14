@class NSString, NSArray, NSSet, NSMutableDictionary, NSDictionary, NSTouchBarItem, NSTouchBarCustomizableConfiguration, CAMediaTimingFunction;
@protocol NSTouchBarDelegate;

@interface NSTouchBar : NSObject <NSAnimatablePropertyContainer, NSCoding> {
    id _configuration;
    NSString *_principalItemIdentifier;
    NSSet *_templateItems;
    id<NSTouchBarDelegate> _delegate;
    NSMutableDictionary *_itemCache;
    long long _visibilityCount;
    unsigned char _isBuildingItems : 1;
    unsigned char _suppressesLessFocusedTouchBars : 1;
    unsigned char _suppressesMoreFocusedTouchBars : 1;
    unsigned char _suppressedByLessFocusedTouchBars : 1;
    unsigned char _suppressedByMoreFocusedTouchBars : 1;
    id _fbReserved;
}

@property (class) BOOL allowsTouchesDuringTrackingLoops;
@property (class, getter=isAutomaticCustomizeTouchBarMenuItemEnabled) BOOL automaticCustomizeTouchBarMenuItemEnabled;

@property BOOL suppressesMoreFocusedBars;
@property BOOL suppressesLessFocusedBars;
@property (getter=isSuppressedByLessFocusedTouchBars) BOOL suppressedByLessFocusedTouchBars;
@property (getter=isSuppressedByMoreFocusedTouchBars) BOOL suppressedByMoreFocusedTouchBars;
@property (readonly) CAMediaTimingFunction *animationTimingFunction;
@property (readonly) double animationDuration;
@property (copy) NSDictionary *animations;
@property (retain) NSTouchBarItem *escapeKeyReplacementItem;
@property (readonly, copy) NSTouchBarCustomizableConfiguration *configuration;
@property (copy) NSString *customizationIdentifier;
@property (copy) NSArray *customizationAllowedItemIdentifiers;
@property (copy) NSArray *customizationRequiredItemIdentifiers;
@property (copy) NSArray *defaultItemIdentifiers;
@property (readonly, copy) NSArray *itemIdentifiers;
@property (copy) NSString *principalItemIdentifier;
@property (copy) NSString *escapeKeyReplacementItemIdentifier;
@property (copy) NSSet *templateItems;
@property (weak) id<NSTouchBarDelegate> delegate;
@property (readonly, getter=isVisible) BOOL visible;

+ (id)defaultAnimationForKey:(id)a0;
+ (BOOL)automaticallyNotifiesObserversOfVisible;
+ (id)pathToUserDefinedTouchBar;
+ (void)resetUserDefinedTouchBar;
+ (id)userDefinedTouchBar;
+ (void)presentSystemModalTouchBar:(id)a0 placement:(long long)a1 systemTrayItemIdentifier:(id)a2;
+ (void)minimizeSystemModalTouchBar:(id)a0;
+ (id)keyPathsForValuesAffectingItemIdentifiers;
+ (id)keyPathsForValuesAffectingItems;
+ (BOOL)automaticRTLMirroringSupported;
+ (BOOL)automaticallyNotifiesObserversOfSuppressesLessFocusedBars;
+ (BOOL)automaticallyNotifiesObserversOfSuppressesMoreFocusedBars;
+ (BOOL)automaticallyNotifiesObserversOfSuppressedByLessFocusedTouchBars;
+ (BOOL)automaticallyNotifiesObserversOfSuppressedByMoreFocusedTouchBars;
+ (void)presentSystemModalTouchBar:(id)a0 systemTrayItemIdentifier:(id)a1;
+ (void)dismissSystemModalTouchBar:(id)a0;
+ (id)keyPathsForValuesAffectingCustomizationDefaultItemIdentifiers;
+ (id)keyPathsForValuesAffectingDefaultItems;
+ (id)keyPathsForValuesAffectingEscapeKeyReplacementItem;
+ (id)touchBarWithItems:(id)a0;
+ (id)touchBarWithDelegate:(id)a0 itemIdentifiers:(id)a1;
+ (id)touchBarWithDelegate:(id)a0 customizationIdentifier:(id)a1 defaultItemIdentifiers:(id)a2 allowedItemIdentifiers:(id)a3;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)animator;
- (Class)_animatorClass;
- (id)animationForKey:(id)a0;
- (id)items;
- (void)setDefaultItems:(id)a0;
- (void)setItemIdentifiers:(id)a0;
- (void)setCustomizationDefaultItemIdentifiers:(id)a0;
- (id)configuration;
- (void)_resetCustomization;
- (void)_persistWithItemIdentifiers:(id)a0 toDomain:(id)a1;
- (long long)touchBarLayoutDirection;
- (id)customizationDefaultItemIdentifiers;
- (id)itemForIdentifier:(id)a0;
- (id)_playgroundQuickLookView;
- (id)_playgroundPreviewView;
- (id)defaultItems;
- (double)minWidthGivenVisualCenterX:(double)a0;
- (void)_purgeCacheIfNecessary;
- (BOOL)_didItemsReallyChange:(id)a0;
- (void)setTouchBarLayoutDirection:(long long)a0;

@end
