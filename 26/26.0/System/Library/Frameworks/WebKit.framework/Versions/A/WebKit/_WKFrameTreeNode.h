@class NSArray, NSString, WKFrameInfo;

@interface _WKFrameTreeNode : NSObject <WKObject> {
    struct AlignedStorage<API::FrameTreeNode, 16UL> { struct Storage { unsigned char data[400]; } m_storage; } _node;
}

@property (readonly, copy, nonatomic) WKFrameInfo *info;
@property (readonly, nonatomic) NSArray *childFrames;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
