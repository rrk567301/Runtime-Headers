@class NSString;

@interface NSURLSessionDelegate : NSObject <NSURLSessionDelegate>

@property (retain) NSString *validationHostname;
@property char enableExtendedValidation;
@property char ignoreInvalidCerts;
@property (retain) NSString *leafOID;
@property char revocationFailClosed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;

@end
