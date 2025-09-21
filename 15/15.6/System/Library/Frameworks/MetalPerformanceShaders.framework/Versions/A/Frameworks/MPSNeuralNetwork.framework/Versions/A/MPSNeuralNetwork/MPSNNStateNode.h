@class MPSNNFilterNode;
@protocol MPSHandle;

@interface MPSNNStateNode : NSObject {
    MPSNNFilterNode *_parent;
    unsigned long long _clientCount;
    char _initializedWithParent;
}

@property (retain, nonatomic) id<MPSHandle> handle;
@property (nonatomic) char exportFromGraph;
@property (nonatomic) char synchronizeResource;

- (void)dealloc;
- (id)debugDescription;
- (id)initWithParent:(id)a0;
- (id)debugQuickLookObject;

@end
