@class NSString;

@interface CDPEDPConfigProvider : NSObject

@property char fetchCompleted;
@property (copy) NSString *tokenName;
@property (copy) NSString *tokenNameTitle;
@property (copy) NSString *tokenNameMedium;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_extractTokenNameFromConfig:(id)a0 finalize:(char)a1;
- (void)fetchConfig;

@end
