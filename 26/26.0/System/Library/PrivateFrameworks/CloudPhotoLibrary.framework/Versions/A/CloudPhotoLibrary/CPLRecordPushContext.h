@class NSString;

@interface CPLRecordPushContext : NSObject <NSSecureCoding>

@property (class, nonatomic) unsigned long long minimumPriorityForLocalConflictResolution;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uploadIdentifier;
@property (readonly, nonatomic) long long flags;
@property (readonly, nonatomic) unsigned long long priority;

+ (id)newEmptyPushContext;
+ (id)pushContextsFromStoredUploadIdentifiersInCoder:(id)a0 key:(id)a1;
+ (id)newPushContextForChange:(id)a0 overStoredRecord:(id)a1 initialUpload:(BOOL)a2;
+ (long long)mergingFlags:(long long)a0 previousFlags:(long long)a1 changeType:(unsigned long long)a2;
+ (id)pushContextsFromStoredUploadIdentifiers:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)pushContextAddingUploadIdentifier;
- (id)initWithUploadIdentifier:(id)a0 flags:(long long)a1 priority:(unsigned long long)a2;
- (id)copyContextWithPriority:(unsigned long long)a0;
- (id)pushContextMergingFlags:(long long)a0 changeType:(unsigned long long)a1 uploadIdentifier:(id)a2 priority:(unsigned long long)a3;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyContextWithUploadIdentifier:(id)a0;

@end
