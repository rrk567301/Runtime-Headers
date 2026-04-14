@class NSString;

@interface _WKSerializedNode : NSObject <WKObject> {
    struct AlignedStorage<API::SerializedNode, 8UL> { struct Storage { unsigned char data[224]; } m_storage; } _node;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
