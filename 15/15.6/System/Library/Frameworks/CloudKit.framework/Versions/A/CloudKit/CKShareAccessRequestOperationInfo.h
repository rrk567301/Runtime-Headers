@class NSArray;

@interface CKShareAccessRequestOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *shareURLsToRequestAccessFor;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)databaseScope;

@end
