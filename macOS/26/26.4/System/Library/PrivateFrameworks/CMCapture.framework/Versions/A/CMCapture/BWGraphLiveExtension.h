@class NSMutableArray;

@interface BWGraphLiveExtension : NSObject {
    long long _configurationID;
    NSMutableArray *_nodes;
    BOOL _committed;
}

- (void)addNode:(id)a0;
- (void)setCommitted:(BOOL)a0;
- (void)dealloc;
- (BOOL)committed;
- (id)nodes;

@end
