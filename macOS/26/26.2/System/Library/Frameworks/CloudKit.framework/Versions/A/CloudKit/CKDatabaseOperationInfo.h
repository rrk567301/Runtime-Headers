@interface CKDatabaseOperationInfo : CKOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long databaseScope;

- (id)initWithCoder:(id)a0;
- (id)activityCreate;
- (void)encodeWithCoder:(id)a0;
- (void)takeValuesFrom:(id)a0;

@end
