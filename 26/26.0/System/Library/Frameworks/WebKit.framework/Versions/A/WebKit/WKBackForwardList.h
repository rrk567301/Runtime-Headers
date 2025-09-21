@class WKBackForwardListItem, NSArray, NSString;

@interface WKBackForwardList : NSObject <WKObject> {
    struct AlignedStorage<WebKit::WebBackForwardList, 8UL> { struct Storage { unsigned char data[56]; } m_storage; } _list;
}

@property (readonly, nonatomic) WKBackForwardListItem *currentItem;
@property (readonly, nonatomic) WKBackForwardListItem *backItem;
@property (readonly, nonatomic) WKBackForwardListItem *forwardItem;
@property (readonly, copy, nonatomic) NSArray *backList;
@property (readonly, copy, nonatomic) NSArray *forwardList;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;

- (void)_clear;
- (id)itemAtIndex:(long long)a0;
- (void)dealloc;
- (void)_removeAllItems;
- (struct Ref<WebKit::WebBackForwardList, WTF::RawPtrTraits<WebKit::WebBackForwardList>, WTF::DefaultRefDerefTraits<WebKit::WebBackForwardList>> { struct WebBackForwardList *x0; })_protectedList;

@end
