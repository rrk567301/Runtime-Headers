@interface PXGTextureConverterOptionsSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (nonatomic) struct { unsigned int effectID; char wantsMipmaps; } textureConverterOptions;

- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
