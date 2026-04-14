@class NSArray;

@interface REMeshLevelOfDetailDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *modelPartIndices;
@property (readonly, nonatomic) float minScreenArea;
@property (readonly, nonatomic) float maxViewDepth;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)estimateContainerSize;
- (id)initWithPartIndicesOnModel:(id)a0 minScreenArea:(float)a1 maxViewDepth:(float)a2;
- (BOOL)validateWithModelPartCount:(unsigned long long)a0 error:(id *)a1;

@end
