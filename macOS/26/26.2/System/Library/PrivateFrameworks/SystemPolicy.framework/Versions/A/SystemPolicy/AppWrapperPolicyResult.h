@interface AppWrapperPolicyResult : NSObject

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isModified;
@property (readonly, nonatomic) unsigned long long signerCategory;

- (id)redactedDescription;
- (id)description;
- (id)initWithValid:(BOOL)a0 withSignerCategory:(unsigned long long)a1 withModified:(BOOL)a2;

@end
