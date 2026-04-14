@class ICQSubscriptionInfo, NSString, NSArray, NSURL, ICQBackupInfo, NSNumber;

@interface ICQCloudStorageSummary : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *displayLabel;
@property (retain, nonatomic) NSNumber *totalStorage;
@property (retain, nonatomic) NSNumber *usedStorage;
@property (retain, nonatomic) NSNumber *freeStorage;
@property (retain, nonatomic) NSNumber *commerceStorage;
@property (retain, nonatomic) NSArray *mediaStorage;
@property (retain, nonatomic) NSArray *tips;
@property (retain, nonatomic) ICQBackupInfo *backupInfo;
@property (retain, nonatomic) ICQSubscriptionInfo *subscriptionInfo;
@property (retain, nonatomic) NSURL *manageStorageURL;
@property (copy, nonatomic) NSString *manageStorageTitle;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
