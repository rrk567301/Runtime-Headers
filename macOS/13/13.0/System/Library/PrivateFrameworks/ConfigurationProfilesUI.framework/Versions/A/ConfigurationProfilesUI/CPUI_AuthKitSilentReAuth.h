@class NSDictionary;

@interface CPUI_AuthKitSilentReAuth : NSObject

@property (retain) NSDictionary *authResults;
@property BOOL requireZMAID;

- (void).cxx_destruct;
- (void)startReAuthWithCompletion:(id /* block */)a0;

@end
