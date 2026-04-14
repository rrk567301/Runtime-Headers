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
- (id)attributes;
- (id)state;
- (id)userInfo;
- (id)description;
- (id)init;
- (id)key;
- (BOOL)setState:(id)a0;
- (void)dealloc;
- (id)destinationPort;
- (id)sourcePort;
- (void)connectionWillDeleteFromGraph;
- (id)initWithGraph:(id)a0 sourcePort:(id)a1 destinationPort:(id)a2 arguments:(id)a3;
- (void)stateUpdated;

@end
