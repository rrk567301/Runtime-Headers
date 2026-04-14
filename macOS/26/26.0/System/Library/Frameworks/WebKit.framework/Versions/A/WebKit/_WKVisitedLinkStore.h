@class NSString;

@interface _WKVisitedLinkStore : NSObject <WKObject> {
    struct AlignedStorage<WebKit::VisitedLinkStore, 8UL> { struct Storage { unsigned char data[184]; } m_storage; } _visitedLinkStore;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAll;
- (void)dealloc;
- (id)init;
- (void)addVisitedLinkWithString:(id)a0;
- (void)addVisitedLinkWithURL:(id)a0;
- (BOOL)containsVisitedLinkWithURL:(id)a0;
- (void)removeVisitedLinkWithURL:(id)a0;

@end
