@class MTLToolsDevice;
@protocol MTLDevice;

@interface MTLToolsObject : NSObject {
    MTLToolsObject *_parent;
    MTLToolsDevice *_device;
    _Atomic int _externalReferences;
}

@property (retain, nonatomic) MTLToolsObject *baseObject;
@property (readonly) id<MTLDevice> device;

- (void)dealloc;
- (id)description;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (id)originalObject;
- (void)setOriginalObject:(id)a0;
- (id)parent;
- (id)strongParent;

@end
