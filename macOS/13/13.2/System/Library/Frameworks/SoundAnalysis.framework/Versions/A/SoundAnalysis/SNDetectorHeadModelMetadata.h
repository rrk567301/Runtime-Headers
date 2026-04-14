@class NSNumber, NSString;

@interface SNDetectorHeadModelMetadata : NSObject <NSCopying>

@property (copy) NSNumber *sampleRate;
@property (copy) NSString *featureExtractorIdentifier;
@property (copy) NSNumber *windowSizeInSamples;
@property (copy) NSNumber *hopSizeInSamples;
@property (copy) NSString *soundIdentifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
