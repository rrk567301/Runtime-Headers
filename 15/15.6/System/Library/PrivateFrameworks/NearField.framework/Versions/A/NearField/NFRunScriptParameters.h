@class NSString, NSArray;

@interface NFRunScriptParameters : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *seid;
@property (nonatomic) char checkAIDAllowList;
@property (retain, nonatomic) NSArray *AIDAllowList;
@property (nonatomic) char initialSelectBeforeRun;
@property (nonatomic) char includeAPDUDuration;
@property (nonatomic) char deactivateAllApps;
@property (nonatomic) double outTotalAPDUExecutionDuration;
@property (nonatomic) unsigned long long outFinalSWStatus;
@property (nonatomic) BOOL toSystemOS;
@property (nonatomic) BOOL disableCompletionNotification;
@property (nonatomic) BOOL outIncompleteExecution;
@property (nonatomic) BOOL outFailureResponseDetected;

+ (id)internalParameterWithParameter:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
