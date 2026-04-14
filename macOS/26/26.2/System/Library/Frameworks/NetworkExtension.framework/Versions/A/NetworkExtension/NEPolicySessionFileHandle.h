@class NSString;

@interface NEPolicySessionFileHandle : NEFileHandle

@property (readonly) NSString *name;

- (id)initWithPolicySession:(id)a0;
- (id)dictionary;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPolicySession:(id)a0 name:(id)a1;
- (id)initFromDictionary:(id)a0;

@end
