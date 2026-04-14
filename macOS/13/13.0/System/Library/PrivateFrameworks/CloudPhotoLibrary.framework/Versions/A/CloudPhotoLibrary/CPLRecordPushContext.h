@class NSString;

@interface CPLRecordPushContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uploadIdentifier;
@property (readonly, nonatomic) long long flags;

+ (id)newEmptyPushContext;
+ (id)pushContextsFromStoredUploadIdentifiers:(id)a0;
+ (id)pushContextsFromStoredUploadIdentifiersInCoder:(id)a0 key:(id)a1;
+ (id)newPushContextForChange:(id)a0 overStoredRecord:(id)a1 initialUpload:(BOOL)a2;
+ (long long)mergingFlags:(long long)a0 previousFlags:(long long)a1 changeType:(unsigned long long)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUploadIdentifier:(id)a0 flags:(long long)a1;
- (id)copyContextWithUploadIdentifier:(id)a0;
- (id)pushContextAddingUploadIdentifier;
- (id)pushContextMergingFlags:(long long)a0 changeType:(unsigned long long)a1 uploadIdentifier:(id)a2;

@end
