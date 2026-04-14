@class VFXNode;

@interface VFXManipulableItem : NSObject {
    float _screenSize;
}

@property (retain, nonatomic) VFXNode *node;
@property (retain, nonatomic) id component;
@property (nonatomic) unsigned long long elementIndex;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } draggedTransform;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ elementPosition;

+ (void)addItems:(id)a0 toWorld:(id)a1;
+ (void)removeItemsFromWorld:(id)a0;

- (void)setTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })transform;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (float)screenSize;
- (void)dealloc;
- (void /* unknown type, empty encoding */)scale;
- (id)parentItem;
- (void)setScreenSize:(float)a0;
- (void)setWorldTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })worldTransform;
- (id)cloneForManipulators;
- (void)validateClone;
- (void)initializeDraggedTransform;

@end
