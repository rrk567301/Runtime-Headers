@interface CKDatabaseOperationInfo : CKOperationInfo <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long databaseScope;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)takeValuesFrom:(id)a0;
- (id)activityCreate;

@end
