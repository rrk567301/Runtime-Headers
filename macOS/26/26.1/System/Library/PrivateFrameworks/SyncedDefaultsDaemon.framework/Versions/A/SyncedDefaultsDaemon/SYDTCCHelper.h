@class NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface SYDTCCHelper : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int notifyToken;
@property (retain, nonatomic) NSSet *cachedDisabledStoreIdentifiers;

+ (id)sharedHelper;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)enableUbiquityIfNecessaryForAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)findDisabledStoreIdentifiers;
- (BOOL)isUbiquityDisabledForStoreIdentifier:(id)a0;
- (void)startListeningToTCCAccessChangedNotifications;
- (void)stopListeningToTCCAccessChangedNotifications;

@end
