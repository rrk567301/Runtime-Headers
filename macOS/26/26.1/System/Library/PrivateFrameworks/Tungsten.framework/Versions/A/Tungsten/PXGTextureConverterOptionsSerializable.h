@interface PXGTextureConverterOptionsSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (nonatomic) struct { unsigned int effectID; BOOL wantsMipmaps; float suppressContentsRect; } textureConverterOptions;

- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
