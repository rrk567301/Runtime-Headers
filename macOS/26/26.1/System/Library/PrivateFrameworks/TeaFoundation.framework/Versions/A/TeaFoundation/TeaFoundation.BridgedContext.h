@interface TeaFoundation.BridgedContext : NSObject <TFContext> {
    void /* unknown type, empty encoding */ context;
}

- (void).cxx_destruct;
- (id)init;
- (void)useObject:(id)a0 forClass:(Class)a1;
- (void)useObject:(id)a0 forProtocol:(id)a1;
- (void)useObject:(id)a0 forClass:(Class)a1 name:(id)a2;
- (void)useObject:(id)a0 forProtocol:(id)a1 name:(id)a2;

@end
