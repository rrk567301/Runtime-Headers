@class NSDictionary, ICStoreDialogResponse;

@interface ICMusicSubscriptionLeaseStatus : NSObject <NSCopying>

@property (nonatomic) char hasOnlinePlaybackKeys;
@property (nonatomic) char hasOfflinePlaybackKeys;
@property (nonatomic) char hasPendingLeaseAcquisition;
@property (nonatomic) char hasInflightLeaseAcquisition;
@property (nonatomic, getter=isTakenDueToLeasePrevention) char takenDueToLeasePrevention;
@property (nonatomic) char shouldPlaybackRequireOnlineKeys;
@property (nonatomic) long long leaseState;
@property (copy, nonatomic) ICStoreDialogResponse *stateReasonDialog;
@property (copy, nonatomic) NSDictionary *stateReasonDialogMetricsDictionary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
