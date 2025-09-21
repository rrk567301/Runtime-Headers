@class CDPDFollowUpFactory, NSString, FLFollowUpController;

@interface CDPDFollowUpController : NSObject <CDPDAuthListener>

@property (retain, nonatomic) FLFollowUpController *followUpController;
@property (retain, nonatomic) CDPDFollowUpFactory *followUpFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_identifiersAllowedForTelemetry;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)informativeText;
- (char)clearFollowUpWithContext:(id)a0 error:(id *)a1;
- (char)_clearFollowUpForContext:(id)a0 error:(id *)a1;
- (id)_cdpRepairContext:(id)a0;
- (id)_followUpControllerForContext:(id)a0;
- (id)_hasSOSActiveDeviceForAltDSID:(id)a0;
- (char)_isNotAudioAccessory;
- (id)_makeAAFLFollowUpController;
- (char)_postFollowUpItem:(id)a0 context:(id)a1 error:(id *)a2;
- (id)_rkMismatchHealingContext:(id)a0;
- (id)_sosCompatibilityModeContext:(id)a0;
- (char)hasPendingFollowUpWithUniqueIdentifier:(id)a0;
- (char)postFollowUpItemForContext:(id)a0 error:(id *)a1;
- (void)securityLevelChangedForAccountContext:(id)a0;

@end
