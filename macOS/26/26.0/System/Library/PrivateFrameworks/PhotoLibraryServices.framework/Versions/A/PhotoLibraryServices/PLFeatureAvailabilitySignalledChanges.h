@class NSString, NSNumber, NSDate;

@interface PLFeatureAvailabilitySignalledChanges : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (nonatomic) BOOL shouldSignalBackgroundProcessing;
@property (retain, nonatomic) NSNumber *photosKnowledgeGraphIsReady;
@property (retain, nonatomic) NSDate *lastFullVUIndexClusterDate;
@property (nonatomic) BOOL resetLastFullVUIndexClusterDate;
@property (retain, nonatomic) NSNumber *fractionOfCuratedAssetsIndexedInVUClustering;
@property (retain, nonatomic) NSNumber *countOfAssetsIndexedInVUClustering;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSourceIdentifier:(id)a0;

@end
