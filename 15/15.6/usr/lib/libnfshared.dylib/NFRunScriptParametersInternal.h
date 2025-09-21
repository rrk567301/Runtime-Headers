@class NSString, NSArray;

@interface NFRunScriptParametersInternal : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *seid;
@property (nonatomic) char checkAIDAllowList;
@property (retain, nonatomic) NSArray *AIDAllowList;
@property (nonatomic) char initialSelectBeforeRun;
@property (nonatomic) char includeAPDUDuration;
@property (nonatomic) char deactivateAllApps;
@property (nonatomic) BOOL toSystemOS;
@property (nonatomic) BOOL disableCompletionNotification;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
