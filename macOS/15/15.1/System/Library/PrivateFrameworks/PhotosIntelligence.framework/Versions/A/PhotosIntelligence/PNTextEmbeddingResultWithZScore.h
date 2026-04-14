@class NSArray, NSNumber, NSString;

@interface PNTextEmbeddingResultWithZScore : NSObject <PNTextEmbeddingResult> {
    NSNumber *_mean;
    NSNumber *_standardDeviation;
}

@property (readonly, nonatomic) NSArray *embedding;
@property (readonly, nonatomic) NSNumber *calibrationVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
