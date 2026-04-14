@class NSNumber, NSString, NSError;

@interface ASDJobSchedulerJobMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *accountIdentifier;
@property (copy) NSString *bundleID;
@property (copy) NSNumber *externalPriority;
@property (copy) NSNumber *itemID;
@property (copy) NSString *jobState;
@property (copy) NSString *jobType;
@property (copy) NSError *lastError;
@property (copy) NSNumber *lastSoftFailureTimestamp;
@property (copy) NSNumber *priority;
@property (copy) NSNumber *priorityBucket;
@property (copy) NSString *skippedReason;
@property (nonatomic) long long softFailureCount;
@property (copy) NSNumber *softFailureTimeout;
@property (copy) NSNumber *timestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
