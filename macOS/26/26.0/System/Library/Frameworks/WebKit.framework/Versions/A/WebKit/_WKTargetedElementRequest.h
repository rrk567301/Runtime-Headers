@class NSString;

@interface _WKTargetedElementRequest : NSObject <WKObject> {
    struct AlignedStorage<API::TargetedElementRequest, 8UL> { struct Storage { unsigned char data[48]; } m_storage; } _request;
    struct RetainPtr<NSString> { NSString *m_ptr; } _searchText;
}

@property (nonatomic) BOOL canIncludeNearbyElements;
@property (nonatomic) BOOL shouldIgnorePointerEventsNone;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSelectors:(id)a0;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithSearchText:(id)a0;

@end
