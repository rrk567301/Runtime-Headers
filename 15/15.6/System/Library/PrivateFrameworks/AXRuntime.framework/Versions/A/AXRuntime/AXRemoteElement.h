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
@property (nonatomic) char onClientSide;
@property (weak, nonatomic) id<AXRemoteElementChildrenDelegate> remoteChildrenDelegate;
@property (weak, nonatomic) id accessibilityContainer;
@property (nonatomic) char deniesDirectAppConnection;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } containerAccessibilityFrame;

+ (void)initialize;
+ (char)_isSerializableAccessibilityElement;
+ (char)registerRemoteElement:(id)a0 remotePort:(unsigned int)a1;
+ (id)registeredRemoteElements;
+ (id)remoteElementForBlock:(id /* block */)a0;
+ (id)remoteElementsForBlock:(id /* block */)a0;
+ (id)remoteElementsForContextId:(unsigned int)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)unregister;
- (unsigned long long)_accessibilityAutomationType;
- (void)platformCleanup;
- (id)_accessibilityActiveKeyboard;
- (unsigned int)_accessibilityContextId;
- (id)_accessibilityFirstElement;
- (id)_accessibilityHandwritingElement;
- (char)_accessibilityHasVisibleFrame;
- (void)_accessibilityIncreaseSelection:(id)a0;
- (char)_accessibilityIsGroupedParent;
- (id)_accessibilityLastElement;
- (id)_accessibilityResponderElement;
- (void)_accessibilitySetFocusOnElement:(char)a0;
- (char)_accessibilitySetNativeFocus;
- (id)_accessibilitySortedElementsWithin;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (void)_getRemoteValuesOffMainThread:(id /* block */)a0;
- (id)_remoteElementWithAttribute:(long long)a0 limitToRemoteSubviews:(char)a1;
- (void)getLeafElementsFromRemoteSide:(id /* block */)a0;
- (id)initWithUUID:(id)a0 andRemotePid:(int)a1 andContextId:(unsigned int)a2;

@end
