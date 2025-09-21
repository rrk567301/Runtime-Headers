@class NSData, NSError;

@interface SCSensitivityAnalysis : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ _analysis;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) char shouldObscureVideo;
@property (nonatomic, readonly) char shouldStore;
@property (nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, readonly) char isContentPreviewable;
@property (nonatomic, readonly) char isContentShareable;
@property (nonatomic, readonly) char shouldFilterStickersAndTapbacks;
@property (nonatomic, readonly) char sensitive;

+ (void)prefetchSensitiveContentPolicy:(void (^)(NSError *))a0;
+ (void)prefetchSensitiveContentPolicy;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isSensitive;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;
- (id)initMigratingFromNudityDetectionValue:(char)a0;
- (id)initWithAnalysisResult:(id)a0 error:(id *)a1;
- (id)initWithNudityDetectionValue:(char)a0;
- (id)initWithPixelBufferClassificationDictionary:(id)a0 error:(id *)a1;
- (id)transferringStateFromAnalysis:(id)a0;

@end
