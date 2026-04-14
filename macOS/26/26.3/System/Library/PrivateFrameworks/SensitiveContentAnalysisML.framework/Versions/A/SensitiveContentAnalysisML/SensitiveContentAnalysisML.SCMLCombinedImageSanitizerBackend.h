@class SCMLImageSanitizerRequest, SCMLImageSanitization, NSError;

@interface SensitiveContentAnalysisML.SCMLCombinedImageSanitizerBackend : NSObject {
    void /* unknown type, empty encoding */ backend;
}

+ (unsigned long long)resolveFlagsAndMapsBackend;
+ (unsigned long long)resolvePrepubescentBackend;
+ (unsigned long long)resolveStructuralIntegrityBackend;
+ (unsigned long long)resolveViolenceAndGoreBackend;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)sanitizeWithRequest:(SCMLImageSanitizerRequest *)a0 output:(SCMLImageSanitization *)a1 backends:(unsigned long long)a2 completionHandler:(void (^)(NSError *))a3;

@end
