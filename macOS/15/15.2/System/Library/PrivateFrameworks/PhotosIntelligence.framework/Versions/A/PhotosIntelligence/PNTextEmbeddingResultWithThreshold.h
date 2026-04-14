@class NSArray, NSString, NSNumber, NSObject;
@protocol OS_os_log;

@interface PNTextEmbeddingResultWithThreshold : NSObject <PNTextEmbeddingResult> {
    NSNumber *_threshold;
    NSObject<OS_os_log> *_log;
}

@property (readonly, nonatomic) NSArray *embedding;
@property (readonly, nonatomic) NSNumber *calibrationVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
