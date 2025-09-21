@class NSError, NSDate;

@interface HKCloudSyncObserverStatus : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char syncEnabled;
@property (nonatomic) char accountSupportsSecureContainer;
@property (nonatomic) char accountProhibitedForCloudSync;
@property (copy, nonatomic) NSDate *lastPullDate;
@property (copy, nonatomic) NSDate *lastPushDate;
@property (copy, nonatomic) NSDate *lastLitePushDate;
@property (copy, nonatomic) NSDate *lastPulledUpdateDate;
@property (copy, nonatomic) NSDate *restoreCompletionDate;
@property (copy, nonatomic) NSError *errorRequiringUserAction;
@property (nonatomic) long long dataUploadRequestStatus;
@property (copy, nonatomic) NSDate *dataUploadRequestStartDate;
@property (copy, nonatomic) NSDate *dataUploadRequestCompletionDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSyncEnabled:(char)a0 accountSupportsSecureContainer:(char)a1 accountProhibitedForCloudSync:(char)a2 lastPullDate:(id)a3 lastPushDate:(id)a4 lastLitePushDate:(id)a5 lastPulledUpdateDate:(id)a6 restoreCompletionDate:(id)a7 errorRequiringUserAction:(id)a8 dataUploadRequestStatus:(long long)a9 dataUploadRequestStartDate:(id)a10 dataUploadRequestCompletionDate:(id)a11;

@end
