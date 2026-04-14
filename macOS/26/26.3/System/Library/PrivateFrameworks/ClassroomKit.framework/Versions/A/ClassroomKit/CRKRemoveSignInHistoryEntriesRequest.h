@class NSArray;

@interface CRKRemoveSignInHistoryEntriesRequest : CATTaskRequest

@property (copy, nonatomic) NSArray *identifiers;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
