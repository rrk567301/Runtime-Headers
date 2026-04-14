@class NSString;

@interface CtrMeshDiagResilienceMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) float penaltyCriticalNodes;
@property (readonly) float penaltyBottlenecks;
@property (readonly) float penaltyAsymmetricLinks;
@property (readonly) float penaltyUnreliableNodes;
@property (readonly) float penaltyUnreachableNodes;
@property (readonly) float weightCriticalNodes;
@property (readonly) float weightBottlenecks;
@property (readonly) float weightAsymmetricLinks;
@property (readonly) float weightUnreliableNodes;
@property (readonly) float weightUnreachableNodes;
@property (readonly) NSString *scoreSummary;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPenaltyCriticalNodes:(float)a0 penaltyBottlenecks:(float)a1 penaltyAsymmetricLinks:(float)a2 penaltyUnreliableNodes:(float)a3 penaltyUnreachableNodes:(float)a4 weightCriticalNodes:(float)a5 weightBottlenecks:(float)a6 weightAsymmetricLinks:(float)a7 weightUnreliableNodes:(float)a8 weightUnreachableNodes:(float)a9 scoreSummary:(id)a10;

@end
