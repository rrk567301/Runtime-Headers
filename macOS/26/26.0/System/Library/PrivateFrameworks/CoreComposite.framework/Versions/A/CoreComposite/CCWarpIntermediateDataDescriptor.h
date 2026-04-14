@interface CCWarpIntermediateDataDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long numberOfTargets;
@property (nonatomic) struct CGSize { double width; double height; } vfrwDepthBinTextureSize;
@property (nonatomic) struct CGSize { double width; double height; } originalDepthTextureSize;
@property (nonatomic) BOOL generateAdaptiveMesh;
@property (nonatomic) unsigned long long adaptiveMeshSizeInBytes;
@property (nonatomic) long long vfrwDownsamplingFactor;
@property (nonatomic) BOOL useStencil;
@property (nonatomic) BOOL deviceSupportsVRR;
@property (nonatomic) unsigned long long protectionOptions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
