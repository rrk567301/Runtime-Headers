@class NSString;

@interface MCMCommandCreateOrLookupAppGroupByAppGroupIdentifier : MCMCommand <MCMParametersCreateOrLookupAppGroupByAppGroupIdentifier>

@property (readonly, nonatomic) NSString *appGroupIdentifier;
@property (readonly, nonatomic) unsigned int expectedPersonaKernelID;

+ (BOOL)secureRestrictedContainerIfNeededWithMetadata:(id)a0 entitlements:(id)a1 error:(id *)a2;
+ (Class)incomingMessageClass;
+ (unsigned long long)command;

- (id)_finalizeWithRealPathWithReason:(unsigned long long *)a0 containerIdentity:(id)a1 clientNegatesReference:(BOOL)a2 error:(id *)a3;
- (void)_recordAnalyticsEventWithAuthResult:(unsigned long long)a0 clientIsAllowed:(BOOL)a1;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void)execute;
- (void)_recordAnalyticsEventWithSandboxExtensionIssueReason:(unsigned long long)a0 clientIsAllowed:(BOOL)a1 alwaysReturnPath:(BOOL)a2;
- (BOOL)preflightClientAllowed;
- (void).cxx_destruct;
- (id)_tokenForContainerPath:(id)a0 containerIdentity:(id)a1 reason:(unsigned long long *)a2 error:(id *)a3;
- (id)_finalizeWithSynthesizedPathWithReason:(unsigned long long *)a0 containerConfig:(id)a1 error:(id *)a2;

@end
