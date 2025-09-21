@class NSURL, NSString;

@interface WKBackForwardListItem : NSObject <WKObject> {
    struct AlignedStorage<WebKit::WebBackForwardListItem, 8UL> { struct Storage { unsigned char data[144]; } m_storage; } _item;
}

@property (readonly) void *_item;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSURL *initialURL;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;

- (void)dealloc;
- (struct CGPoint { double x0; double x1; })_scrollPosition;
- (struct CGImage { } *)_copySnapshotForTesting;
- (struct Ref<WebKit::WebBackForwardListItem, WTF::RawPtrTraits<WebKit::WebBackForwardListItem>, WTF::DefaultRefDerefTraits<WebKit::WebBackForwardListItem>> { struct WebBackForwardListItem *x0; })_protectedItem;
- (BOOL)_wasCreatedByJSWithoutUserInteraction;

@end
