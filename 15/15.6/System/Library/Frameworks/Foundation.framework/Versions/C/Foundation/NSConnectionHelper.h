@class NSSet, NSConnection;

@interface NSConnectionHelper : NSObject {
    double reqLim;
    double repLim;
    char remoteUsesKeyedDO;
    NSSet *allowlist;
    char useKeyedDO;
    NSConnection *parent;
}

- (void)dealloc;
- (id)init;
- (void)setAllowList:(id)a0;

@end
