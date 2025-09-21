@class NSMutableDictionary, NSString, NSDate, NSNumber, SSPurchase;

@interface CKUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSMutableDictionary *dictionary;
@property (readonly, nonatomic) NSNumber *itemIdentifier;
@property (readonly, nonatomic) NSString *actionParams;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSDate *releaseDate;
@property (readonly, nonatomic) NSString *title;
@property (nonatomic) BOOL isStaged;
@property (readonly, nonatomic) SSPurchase *purchase;
@property (nonatomic) long long softwareUpdateState;
@property (nonatomic) long long autoUpdateAbortCode;
@property (readonly, nonatomic) NSString *autoUpdateAbortReason;
@property (readonly, nonatomic) BOOL didFailToAutoInstall;
@property (nonatomic) BOOL hasBeenSeenByUser;
@property (copy, nonatomic) NSDate *firstAutoUpdateAttemptDate;

- (id)itemIdentifier;
- (id)bundleVersion;
- (id)initWithDictionary:(id)a0;
- (id)bundleID;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (double)_autoInstallUpdateMaximumRetryInterval;
- (id)actionParams;

@end
