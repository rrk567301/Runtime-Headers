@interface IdFeatureConfig : FeatureConfig

@property int embeddingTableSize;
@property int embeddingDimention;
@property char hashing;
@property int hashBucketStart;

- (id)init;

@end
