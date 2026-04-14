@class NSString, CKRecordID;

@interface CKPackageReference : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, nonatomic) NSString *fieldName;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRecordID:(id)a0 databaseScope:(long long)a1 fieldName:(id)a2;

@end
