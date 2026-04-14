@class GFPort, GFGraph, NSDictionary, NSMutableDictionary;

@interface GFConnection : NSObject <GFBase> {
    GFGraph *_owner;
    GFPort *_sourcePort;
    GFPort *_destPort;
    NSDictionary *_attributes;
    NSMutableDictionary *_userInfo;
    void *_unused[4];
}

- (id)graph;
- (id)userInfo;
- (id)key;
- (BOOL)setState:(id)a0;
- (id)description;
- (void)dealloc;
- (id)attributes;
- (id)state;
- (id)init;
- (id)destinationPort;
- (id)sourcePort;
- (void)connectionWillDeleteFromGraph;
- (id)initWithGraph:(id)a0 sourcePort:(id)a1 destinationPort:(id)a2 arguments:(id)a3;
- (void)stateUpdated;

@end
