@class NSMutableArray, GFList;

@interface QCOSCPatch : QCNetworkPatch {
    BOOL _run;
    NSMutableArray *_oscPorts;
    GFList *_oscPortsConfiguration;
}

+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (BOOL)setState:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)setOscPortsConfiguration:(id)a0;
- (id)oscPortsConfiguration;
- (void)addPort:(id)a0 ofType:(id)a1;
- (void)removePortAtIndex:(unsigned long long)a0;

@end
