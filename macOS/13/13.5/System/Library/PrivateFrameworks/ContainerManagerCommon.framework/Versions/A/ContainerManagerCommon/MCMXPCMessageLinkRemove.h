@interface MCMXPCMessageLinkRemove : MCMXPCMessageWithLinkBase <MCMParametersLinkRemove>

@property (readonly, nonatomic) unsigned long long attributes;

- (unsigned int)disposition;
- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
