@class BCICloudIdentityToken, NSHashTable, BDSICloudIdentityToken, NSObject;
@protocol OS_dispatch_queue, BDSLiverpoolStatusChangeObserving;

@interface BDSLiverpoolStatusMonitor : NSObject

@property (class, readonly) BDSLiverpoolStatusMonitor *sharedInstance;

@property (copy, nonatomic) BDSICloudIdentityToken *lastArchivedICloudIdentityToken;
@property (copy, nonatomic) BDSICloudIdentityToken *lastArchivedNonNilICloudIdentityToken;
@property (copy, nonatomic) BDSICloudIdentityToken *currentICloudIdentityToken;
@property (nonatomic) char optedIn;
@property (nonatomic) char optedInKnown;
@property (nonatomic) char lastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch;
@property (nonatomic) int tccNotifyToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *containerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (weak, nonatomic) id<BDSLiverpoolStatusChangeObserving> coordinatingObserver;
@property (readonly, copy, nonatomic) BCICloudIdentityToken *iCloudIdentityToken;

+ (id)makeOSStateHandler;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (char)isCloudKitEnabled;
- (void)_notifyObserversWithCurrentToken:(id)a0 lastToken:(id)a1;
- (void)dq_archiveCurrentICloudIdentityToken;
- (char)dq_isCloudKitEnabled;
- (void)dq_refreshICloudAvailabilityStatus;
- (void)p_iCloudIdentityDidChange:(id)a0;
- (void)refreshICloudTokensAndUpdateWithOptedIn:(char)a0;
- (void)registerCoordinatingObserver:(id)a0;
- (void)restartObserving;
- (void)updateWithOptedIn:(char)a0;

@end
