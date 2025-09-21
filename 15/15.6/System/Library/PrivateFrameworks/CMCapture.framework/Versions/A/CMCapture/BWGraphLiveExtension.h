@class NSMutableArray;

@interface BWGraphLiveExtension : NSObject {
    long long _configurationID;
    NSMutableArray *_nodes;
    char _committed;
}

- (void)dealloc;
- (char)committed;
- (id)nodes;
- (void)setCommitted:(char)a0;
- (void)addNode:(id)a0;

@end
