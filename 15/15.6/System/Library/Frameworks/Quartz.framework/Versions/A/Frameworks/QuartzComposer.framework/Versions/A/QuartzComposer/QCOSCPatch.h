@class NSMutableArray, GFList;

@interface QCOSCPatch : QCNetworkPatch {
    char _run;
    NSMutableArray *_oscPorts;
    GFList *_oscPortsConfiguration;
}

+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (void)addPort:(id)a0 ofType:(id)a1;
- (id)oscPortsConfiguration;
- (void)removePortAtIndex:(unsigned long long)a0;
- (void)setOscPortsConfiguration:(id)a0;

@end
