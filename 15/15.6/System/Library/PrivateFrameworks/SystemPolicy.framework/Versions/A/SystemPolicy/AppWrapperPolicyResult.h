@interface AppWrapperPolicyResult : NSObject

@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) char isModified;
@property (readonly, nonatomic) unsigned long long signerCategory;

- (id)description;
- (id)redactedDescription;
- (id)initWithValid:(char)a0 withSignerCategory:(unsigned long long)a1 withModified:(char)a2;

@end
