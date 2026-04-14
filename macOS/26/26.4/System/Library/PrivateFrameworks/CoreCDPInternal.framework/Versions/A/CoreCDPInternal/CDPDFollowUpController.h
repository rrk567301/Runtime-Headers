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
+ (id)analyticsEventWithEventName:(id)a0 context:(id)a1 identifier:(id)a2;

- (id)informativeText;
- (id)_hasSOSActiveDeviceForAltDSID:(id)a0;
- (id)_sosCompatibilityModeContext:(id)a0;
- (void)securityLevelChangedForAccountContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isNotAudioAccessory;
- (id)init;
- (BOOL)_clearFollowUpForContext:(id)a0 error:(id *)a1;
- (BOOL)_hasPendingFollowUpWithIdentifier:(id)a0 usingController:(id)a1;
- (BOOL)_postFollowUpItem:(id)a0 context:(id)a1 error:(id *)a2;
- (id)_cdpRepairContext:(id)a0;
- (id)_makeAAFLFollowUpController;
- (BOOL)postFollowUpItemForContext:(id)a0 error:(id *)a1;
- (BOOL)hasPendingFollowUpWithUniqueIdentifier:(id)a0;
- (id)_followUpControllerForContext:(id)a0;
- (void)dealloc;
- (id)_rkMismatchHealingContext:(id)a0;
- (BOOL)clearFollowUpWithContext:(id)a0 error:(id *)a1;

@end
