@class NSString, NSArray;

@interface NFRunScriptParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *seid;
@property BOOL checkWhitelist;
@property (retain) NSArray *whitelistedAID;
@property BOOL initialSelectBeforeRun;
@property BOOL includeAPDUDuration;
@property BOOL deactivateAllApps;
@property double outTotalAPDUExecutionDuration;
@property unsigned long long outFinalSWStatus;
@property BOOL toSystemOS;

+ (id)internalParameterWithParameter:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
