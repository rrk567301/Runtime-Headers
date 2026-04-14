@protocol MTLBuffer;

@interface IMSMeshDataBuffers : NSObject

@property (nonatomic) unsigned long long triangleCount;
@property (retain, nonatomic) id<MTLBuffer> positionBuffer;
@property (nonatomic) unsigned long long positionOffset;
@property (retain, nonatomic) id<MTLBuffer> uvBuffer;
@property (nonatomic) unsigned long long uvOffset;
@property (retain, nonatomic) id<MTLBuffer> indicesBuffer;
@property (nonatomic) unsigned long long indicesOffset;

- (void).cxx_destruct;

@end
