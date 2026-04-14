@interface IMFilterMessagePipelineComponentContext : NSObject

@property BOOL wasContextUsed;
@property BOOL isBlackholed;
@property BOOL shouldTrackForRequery;
@property (nonatomic) long long isFiltered;
@property (nonatomic) long long spamDetectionSource;

@end
