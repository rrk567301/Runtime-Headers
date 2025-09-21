@class NSString;

@interface PXGVisionRecordingMaterialSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (retain, nonatomic) NSString *shaderFlags;
@property (retain, nonatomic) NSString *colorProgram;
@property (retain, nonatomic) NSString *shader;
@property (nonatomic) char isOpaque;
@property (nonatomic) char hasPlatter;
@property (nonatomic) long long identifier;

- (void).cxx_destruct;
- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
