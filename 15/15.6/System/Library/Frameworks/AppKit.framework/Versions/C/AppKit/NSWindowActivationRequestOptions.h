@class NSWindow;

@interface NSWindowActivationRequestOptions : NSObject

@property long long relativeTo;
@property char recalculateKeyWindow;
@property char forDockMiniaturize;
@property char preferConditionalOrdering;
@property char allowAnimation;
@property char needsSheetAnimation;
@property char uninhibitedOrdering;
@property char synchronizingOrderingGroupVisibility;
@property char forHideUnhide;
@property (readonly, weak) NSWindow *requestingWindow;
@property (readonly) unsigned long long tileSpaceToJoin;
@property (weak) id requestor;
@property unsigned long long preferredPresentationStyle;
@property char becomeKey;
@property long long orderingMode;

+ (id)windowActivationRequestOptionsWithOrderingMode:(long long)a0 relativeTo:(long long)a1;
+ (id)windowActivationRequestOptionsWithRequestor:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
