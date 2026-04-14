@class NSString;
@protocol NSCopying, NSObject;

@interface MFCacheDeleteAttachmentPurger : NSObject

@property (readonly, copy, nonatomic) id<NSCopying, NSObject> volumeIdentifier;
@property (readonly, nonatomic) int urgency;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) unsigned long long totalBytesPurged;
@property (readonly, nonatomic) unsigned long long purgeableBytesAvailable;

- (id)init;
- (void).cxx_destruct;
- (id)initWithVolumeIdentifier:(id)a0 urgency:(int)a1;
- (unsigned long long)additionalPurgeableBytesAvailableByChangingCachePolicyTo:(long long)a0;
- (unsigned long long)purgeWithRequestedBytes:(unsigned long long)a0 outErrorMessage:(id *)a1;
- (id)_sharedAccountStore;
- (void)_activeAccountsByCachePolicy:(id *)a0 inactiveAccountsByCachePolicy:(id *)a1;
- (void)_attachmentsForAccounts:(id)a0 minimumCachePolicy:(long long)a1 withBlock:(id /* block */)a2;
- (long long)_monthsToKeepRecentAttachments;
- (void)_attachmentsForAccounts:(id)a0 startTimeInterval:(double)a1 endTimeInterval:(double)a2 withBlock:(id /* block */)a3;
- (id)_purgeQueue;
- (BOOL)_deleteAttachmentFile:(id)a0;

@end
