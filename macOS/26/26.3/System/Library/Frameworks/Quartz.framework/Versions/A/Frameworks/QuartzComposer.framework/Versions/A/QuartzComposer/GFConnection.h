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
- (id)key;
- (id)description;
- (id)attributes;
- (id)init;
- (id)state;
- (void)dealloc;
- (id)userInfo;
- (BOOL)setState:(id)a0;
- (id)destinationPort;
- (id)sourcePort;
- (void)connectionWillDeleteFromGraph;
- (id)initWithGraph:(id)a0 sourcePort:(id)a1 destinationPort:(id)a2 arguments:(id)a3;
- (void)stateUpdated;

@end
