@class NSData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PAOpenGLColorCube : NSObject {
    NSData *_data;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_texturesByDevice;
}

@property (readonly, nonatomic) unsigned int gridPoints;

+ (void)initialize;
+ (id)identityColorCube;
+ (id)_newIdentityColorCube;
+ (id)colorCubeFromDisplay:(id)a0 toDisplay:(id)a1;
+ (id)_keyForTransformFromDisplay:(id)a0 toDisplay:(id)a1;
+ (id)_keyForTransformFromProfile:(id)a0 toProfile:(id)a1;
+ (id)_keyForTransformFromProfile:(id)a0 toProfile:(id)a1 proofingProfile:(id)a2;
+ (id)_lookupColorCubeForKey:(id)a0;
+ (void)_setColorCube:(id)a0 forKey:(id)a1;

- (void).cxx_destruct;
- (id)textureForDevice:(id)a0;
- (id)_newTextureForDevice:(id)a0;
- (id)initWithSourceDisplay:(id)a0 destinationDisplay:(id)a1;
- (id)initWithColorTransform:(id)a0;
- (id)initWithData:(id)a0 gridSize:(unsigned int)a1;
- (id)_textureForDevice:(id)a0;
- (id)_lookupTextureForDevice:(id)a0;
- (void)_setTexture:(id)a0 forDevice:(id)a1;

@end
