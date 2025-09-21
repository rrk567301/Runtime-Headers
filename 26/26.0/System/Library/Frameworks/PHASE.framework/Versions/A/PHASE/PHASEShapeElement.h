@class PHASEShape, PHASEMaterial;

@interface PHASEShapeElement : NSObject {
    PHASEShape *_owner;
}

@property (retain, nonatomic) PHASEMaterial *material;

+ (id)new;

- (id)initWithOwner:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOwner:(id)a0 material:(id)a1;

@end
