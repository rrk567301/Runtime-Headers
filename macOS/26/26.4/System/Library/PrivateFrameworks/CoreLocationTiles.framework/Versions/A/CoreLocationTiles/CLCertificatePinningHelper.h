@interface CLCertificatePinningHelper : NSObject

+ (int)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
+ (void)initialize;
+ (id)knownHosts;

@end
