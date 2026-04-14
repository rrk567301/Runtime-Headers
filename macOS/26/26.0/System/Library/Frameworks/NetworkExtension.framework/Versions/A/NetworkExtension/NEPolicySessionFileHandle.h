@class NSString;

@interface NEPolicySessionFileHandle : NEFileHandle

@property (readonly) NSString *name;

- (id)initFromDictionary:(id)a0;
- (unsigned long long)type;
- (id)initWithPolicySession:(id)a0 name:(id)a1;
- (id)initWithPolicySession:(id)a0;
- (id)description;
- (id)dictionary;
- (void).cxx_destruct;

@end
