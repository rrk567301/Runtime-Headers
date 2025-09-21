@class NSArray;

@interface CRKRemoveSignInHistoryEntriesRequest : CATTaskRequest

@property (copy, nonatomic) NSArray *identifiers;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
