@interface ContainerManagerCommon.MCMXPCMessageAuthorize : MCMXPCMessageQuery {
    void /* unknown type, empty encoding */ auditToken;
    void /* unknown type, empty encoding */ flags;
    void /* unknown type, empty encoding */ onBehalfOfSelf;
}

- (id)initWithContext:(id)a0;
- (id)init;
- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
