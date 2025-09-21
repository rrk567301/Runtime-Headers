@class NSString, NSDictionary, NSURL, VSFailable, VSPreferences;

@interface VSApplicationBootURLOperation : VSAsyncOperation <NSURLSessionDelegate>

@property (retain, nonatomic) VSPreferences *preferences;
@property (nonatomic, getter=isForTesting) char test;
@property (nonatomic) char skipSystemTrustVerification;
@property (retain, nonatomic) NSDictionary *trustInfo;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic, getter=isDeveloper) char developer;
@property (retain, nonatomic) VSFailable *urlOrError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)executionDidBegin;
- (id)generateFilePathForURL:(id)a0;
- (id)initWithBootURL:(id)a0 isDeveloper:(char)a1;
- (char)validateTrust:(struct __SecTrust { } *)a0;
- (char)verifyCertificateIsSystemTrustedWithTrust:(struct __SecTrust { } *)a0;

@end
