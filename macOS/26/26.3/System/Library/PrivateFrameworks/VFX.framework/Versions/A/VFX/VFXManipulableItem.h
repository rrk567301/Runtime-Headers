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
- (void)dealloc;
- (float)screenSize;
- (BOOL)isEqual:(id)a0;
- (void /* unknown type, empty encoding */)scale;
- (unsigned long long)hash;
- (struct { void /* unknown type, empty encoding */ x0[4]; })transform;
- (id)parentItem;
- (void)setScreenSize:(float)a0;
- (void)setWorldTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })worldTransform;
- (id)cloneForManipulators;
- (void)validateClone;
- (void)initializeDraggedTransform;

@end
