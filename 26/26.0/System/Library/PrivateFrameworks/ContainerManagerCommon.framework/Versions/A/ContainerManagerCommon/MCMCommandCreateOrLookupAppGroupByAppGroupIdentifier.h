@class NSString;

@interface MCMCommandCreateOrLookupAppGroupByAppGroupIdentifier : MCMCommand <MCMParametersCreateOrLookupAppGroupByAppGroupIdentifier>

@property (readonly, nonatomic) NSString *appGroupIdentifier;
@property (readonly, nonatomic) unsigned int expectedPersonaKernelID;

+ (unsigned long long)command;
+ (BOOL)secureRestrictedContainerIfNeededWithMetadata:(id)a0 entitlements:(id)a1 error:(id *)a2;
+ (Class)incomingMessageClass;

- (void)execute;
- (BOOL)preflightClientAllowed;
- (void)_recordAnalyticsEventWithSandboxExtensionIssueReason:(unsigned long long)a0 clientIsAllowed:(BOOL)a1 alwaysReturnPath:(BOOL)a2;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void)_recordAnalyticsEventWithAuthResult:(unsigned long long)a0 clientIsAllowed:(BOOL)a1;
- (id)_finalizeWithSynthesizedPathWithReason:(unsigned long long *)a0 containerConfig:(id)a1 error:(id *)a2;
- (id)_tokenForContainerPath:(id)a0 containerIdentity:(id)a1 reason:(unsigned long long *)a2 error:(id *)a3;
- (id)_finalizeWithRealPathWithReason:(unsigned long long *)a0 containerIdentity:(id)a1 clientNegatesReference:(BOOL)a2 error:(id *)a3;
- (void).cxx_destruct;

@end
