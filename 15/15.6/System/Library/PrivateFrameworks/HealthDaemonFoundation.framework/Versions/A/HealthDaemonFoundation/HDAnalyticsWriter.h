@class NSString;

@interface HDAnalyticsWriter : NSObject {
    struct __SecCertificate { } *_certificate;
    NSString *_analyticsDirectory;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)URLForAnalyticsFileWithName:(id)a0;
- (id)analyticsFilePathsWithError:(id *)a0;
- (char)submitJSONAnalyticsData:(id)a0 bugType:(id)a1 error:(id *)a2;
- (char)submitJSONAnalyticsData:(id)a0 toDirectory:(id)a1 withConfiguration:(id)a2 error:(id *)a3;

@end
