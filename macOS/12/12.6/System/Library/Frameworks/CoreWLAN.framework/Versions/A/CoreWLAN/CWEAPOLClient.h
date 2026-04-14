@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CWEAPOLClient : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    void *_eapolStore;
}

@property (copy) NSString *interfaceName;
@property (readonly) long long eapolClientStatus;
@property (readonly) long long eapolClientSupplicantState;
@property (readonly) long long eapolClientControlState;
@property (readonly) long long eapolClientControlMode;
@property (readonly) NSString *eapolClientUUID;
@property (readonly) BOOL userCancelledAuthentication;

+ (id)eapolClientForInterfaceWithName:(id)a0;

- (void)dealloc;
- (id)description;
- (id)initForInterfaceWithName:(id)a0;
- (long long)eapolClientSupplicantState;
- (BOOL)startEAPOLWithClientItemID:(struct __EAPOLClientItemID { } *)a0 username:(id)a1 password:(id)a2 identity:(struct __SecIdentity { } *)a3 remember:(BOOL)a4 error:(out id *)a5;
- (long long)eapolClientControlState;
- (BOOL)startEAPOLWithClientItemID:(struct __EAPOLClientItemID { } *)a0 authenticationInfo:(id)a1 error:(out id *)a2;
- (BOOL)startSystemModeEAPOLForSSID:(id)a0 error:(out id *)a1;
- (BOOL)startEAPOLForSSID:(id)a0 username:(id)a1 password:(id)a2 identity:(struct __SecIdentity { } *)a3 remember:(BOOL)a4 error:(out id *)a5;
- (BOOL)startEAPOLForSSID:(id)a0 authenticationInfo:(id)a1 error:(out id *)a2;
- (void)stopEAPOL;
- (long long)eapolClientStatus;
- (id)eapolClientUUID;
- (long long)eapolClientDomainSpecificError;
- (BOOL)userCancelledAuthentication;

@end
