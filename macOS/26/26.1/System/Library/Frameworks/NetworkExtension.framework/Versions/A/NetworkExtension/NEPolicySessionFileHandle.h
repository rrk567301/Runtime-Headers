@class NSString;

@interface NEPolicySessionFileHandle : NEFileHandle

@property (readonly) NSString *name;

- (unsigned long long)type;
- (id)initWithPolicySession:(id)a0;
- (id)dictionary;
- (id)description;
- (id)initWithPolicySession:(id)a0 name:(id)a1;
- (void).cxx_destruct;
- (id)initFromDictionary:(id)a0;

@end
