@class NSMutableArray;

@interface AVBMVRP : AVBMRP {
    NSMutableArray *clients;
}

+ (id)IOClassName;
+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;

- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)serviceTerminated;
- (char)registerVLANID:(unsigned short)a0;
- (void)callbackWithArgs:(unsigned long long *)a0 argCount:(unsigned int)a1;
- (char)deregisterVLANID:(unsigned short)a0;

@end
