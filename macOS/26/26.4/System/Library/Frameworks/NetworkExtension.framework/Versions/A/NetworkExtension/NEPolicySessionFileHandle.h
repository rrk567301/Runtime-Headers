@class NSString;

@interface NEPolicySessionFileHandle : NEFileHandle

@property (readonly) NSString *name;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithPolicySession:(id)a0;
- (id)initFromDictionary:(id)a0;
- (id)description;
- (id)initWithPolicySession:(id)a0 name:(id)a1;
- (id)dictionary;

@end
