@class NSData, NSError;

@interface SCSensitivityAnalysis : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ _analysis;
}

@property (class, nonatomic, readonly) SCSensitivityAnalysis *presumedSensitiveAnalysis;
@property (class, nonatomic, readonly) SCSensitivityAnalysis *notAnalyzableAnalysis;
@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL shouldInterruptVideo;
@property (nonatomic, readonly) BOOL shouldIndicateSensitivity;
@property (nonatomic, readonly) BOOL shouldMuteAudio;
@property (nonatomic, readonly) BOOL shouldStore;
@property (nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, readonly) BOOL isContentPreviewable;
@property (nonatomic, readonly) BOOL isContentShareable;
@property (nonatomic, readonly) BOOL mayNeedOnDemandAnalysis;
@property (nonatomic, readonly) long long compactAnalysis;
@property (nonatomic, readonly) BOOL shouldShowStickerAttributions;
@property (nonatomic, readonly) BOOL shouldFilterStickersAndTapbacks;
@property (nonatomic, readonly) BOOL sensitive;
@property (nonatomic, readonly) BOOL isUnscannedExempted;

+ (id)fetchExclusionPredicateWithCompactAnalysisKeyPath:(id)a0;
+ (BOOL)shouldHonorFetchExclusionPredicate:(id *)a0;
+ (id)subscribeToSensitiveContentPolicyChangeNotifications:(id /* block */)a0;
+ (void)prefetchSensitiveContentPolicy:(void (^)(NSError *))a0;
+ (void)prefetchSensitiveContentPolicy;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSensitive;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;
- (id)initFromCompactAnalysis:(long long)a0 error:(id *)a1;
- (id)transferringStateFromAnalysis:(id)a0;
- (id)initMigratingFromNudityDetectionValue:(BOOL)a0;
- (id)initSummaryAnalysisForOptions:(unsigned long long)a0;
- (id)initWithAnalysisResult:(id)a0 error:(id *)a1;
- (id)initWithNudityDetectionValue:(BOOL)a0;
- (id)initWithPixelBufferClassificationDictionary:(id)a0 error:(id *)a1;

@end
