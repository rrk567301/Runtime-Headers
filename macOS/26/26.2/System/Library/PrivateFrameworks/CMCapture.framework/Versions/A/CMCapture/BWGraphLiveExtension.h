@class NSMutableArray;

@interface BWGraphLiveExtension : NSObject {
    long long _configurationID;
    NSMutableArray *_nodes;
    BOOL _committed;
}

- (void)setCommitted:(BOOL)a0;
- (BOOL)committed;
- (void)addNode:(id)a0;
- (void)dealloc;
- (id)nodes;

@end
