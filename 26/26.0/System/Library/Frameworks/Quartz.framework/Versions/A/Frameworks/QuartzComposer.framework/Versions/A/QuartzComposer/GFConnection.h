@class GFPort, GFGraph, NSDictionary, NSMutableDictionary;

@interface GFConnection : NSObject <GFBase> {
    GFGraph *_owner;
    GFPort *_sourcePort;
    GFPort *_destPort;
    NSDictionary *_attributes;
    NSMutableDictionary *_userInfo;
    void *_unused[4];
}

- (BOOL)setState:(id)a0;
- (id)graph;
- (id)state;
- (void)dealloc;
- (id)init;
- (id)description;
- (id)key;
- (id)attributes;
- (id)userInfo;
- (id)destinationPort;
- (id)sourcePort;
- (void)connectionWillDeleteFromGraph;
- (id)initWithGraph:(id)a0 sourcePort:(id)a1 destinationPort:(id)a2 arguments:(id)a3;
- (void)stateUpdated;

@end
