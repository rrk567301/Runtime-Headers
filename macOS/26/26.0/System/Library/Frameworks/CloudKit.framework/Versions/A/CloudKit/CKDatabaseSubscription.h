@class NSString;

@interface CKDatabaseSubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *recordType;

+ (id)new;
+ (void)initialize;

- (void)setRecordType:(id)a0;
- (id)CKPropertiesDescription;
- (id)init;
- (id)initWithSubscriptionID:(id)a0;
- (id)initWithCoder:(id)a0;

@end
