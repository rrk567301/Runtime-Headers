@class SCMLPerformance, SCMLImageAnalyzer, NSDictionary, SCMLTextAnalyzer, NSObject;
@protocol OS_dispatch_queue;

@interface SCMLHandler : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) SCMLImageAnalyzer *imageAnalyzer;
@property (readonly) SCMLTextAnalyzer *textAnalyzer;
@property (readonly) NSDictionary *options;
@property (readonly, nonatomic) SCMLPerformance *perfResults;

+ (char)supportsANE;
+ (id)currentModelVersion;
+ (char)isImageSensitiveForLabel:(id)a0 confidenceScore:(double)a1 classificationMode:(unsigned long long)a2;
+ (char)isImageSensitiveForLabel:(id)a0 confidenceScore:(double)a1 classificationMode:(unsigned long long)a2 modelVersion:(id)a3 error:(id *)a4;
+ (char)supportsCPU;

- (void).cxx_destruct;
- (id)performanceStatistics;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)analyzeImage:(struct CGImage { } *)a0 error:(id *)a1;
- (id)analyzePixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (long long)classifyPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)classifyPixelBuffer:(struct __CVBuffer { } *)a0 stagedText:(id)a1 inConversationWithIdentifier:(id)a2 error:(id *)a3;
- (long long)classifyImage:(struct CGImage { } *)a0 error:(id *)a1;
- (id)classifyPixelBuffer:(struct __CVBuffer { } *)a0 startDate:(id)a1 endDate:(id)a2 stagedText:(id)a3 inConversationWithIdentifier:(id)a4 error:(id *)a5;
- (id)getOperatingPointDataForClassName:(id)a0 error:(id *)a1;

@end
