@class NSString, NSMutableSet;
@protocol AXRemoteElementChildrenDelegate;

@interface AXRemoteElement : NSObject {
    NSMutableSet *_allChildren;
}

@property (nonatomic) int remotePid;
@property (nonatomic) unsigned int contextId;
@property (retain, nonatomic) NSString *uuid;
@property (copy, nonatomic) id /* block */ contextRetrieval;
@property (copy, nonatomic) id /* block */ pidRetrieval;
@property (readonly, nonatomic) unsigned long long uuidHash;
@property (readonly, nonatomic) unsigned int localHostingWindowContextId;
@property (nonatomic) unsigned int machPort;
@property (nonatomic) BOOL onClientSide;
@property (weak, nonatomic) id<AXRemoteElementChildrenDelegate> remoteChildrenDelegate;
@property (weak, nonatomic) id accessibilityContainer;
@property (nonatomic) BOOL deniesDirectAppConnection;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } containerAccessibilityFrame;

+ (void)initialize;
+ (BOOL)_isSerializableAccessibilityElement;
+ (id)remoteElementForBlock:(id /* block */)a0;
+ (id)registeredRemoteElements;
+ (id)remoteElementsForBlock:(id /* block */)a0;
+ (id)remoteElementsForContextId:(unsigned int)a0;
+ (BOOL)registerRemoteElement:(id)a0 remotePort:(unsigned int)a1;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)unregister;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityElements;
- (unsigned long long)_accessibilityAutomationType;
- (unsigned int)_accessibilityContextId;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)initWithUUID:(id)a0 andRemotePid:(int)a1 andContextId:(unsigned int)a2;
- (void)platformCleanup;
- (id)_accessibilityTextOperations;
- (id)_accessibilityHandwritingElement;
- (void)_getRemoteValuesOffMainThread:(id /* block */)a0;
- (void)getLeafElementsFromRemoteSide:(id /* block */)a0;
- (id)_remoteElementWithAttribute:(long long)a0 limitToRemoteSubviews:(BOOL)a1;
- (id)_accessibilityActiveKeyboard;
- (id)_accessibilityResponderElement;
- (id)_accessibilityFirstElement;
- (id)_accessibilityLastElement;
- (BOOL)_accessibilityIsGroupedParent;
- (id)_accessibilitySortedElementsWithin;
- (BOOL)_accessibilityHasVisibleFrame;
- (void)_accessibilityIncreaseSelection:(id)a0;
- (void)_accessibilitySetFocusOnElement:(BOOL)a0;
- (BOOL)_accessibilitySetNativeFocus;

@end
