@class NSString;

@interface CKDatabaseSubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *recordType;

+ (id)new;
+ (void)initialize;

- (id)initWithCoder:(id)a0;
- (id)initWithSubscriptionID:(id)a0;
- (id)init;
- (id)CKPropertiesDescription;
- (void)setRecordType:(id)a0;

@end
