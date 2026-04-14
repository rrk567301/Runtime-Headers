@class NSArray;

@interface CRKRemoveSignInHistoryEntriesRequest : CATTaskRequest

@property (copy, nonatomic) NSArray *identifiers;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
