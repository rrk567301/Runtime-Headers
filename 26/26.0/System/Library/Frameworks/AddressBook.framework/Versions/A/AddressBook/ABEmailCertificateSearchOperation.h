@class NSString;

@interface ABEmailCertificateSearchOperation : NSOperation

@property (retain) NSString *emailAddress;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)main;
- (void).cxx_destruct;
- (void)_doMain;

@end
