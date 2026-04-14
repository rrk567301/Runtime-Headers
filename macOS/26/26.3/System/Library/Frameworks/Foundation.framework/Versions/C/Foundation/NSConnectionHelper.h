@class NSSet, NSConnection;

@interface NSConnectionHelper : NSObject {
    double reqLim;
    double repLim;
    BOOL remoteUsesKeyedDO;
    NSSet *allowlist;
    BOOL useKeyedDO;
    NSConnection *parent;
}

- (id)init;
- (void)dealloc;
- (void)setAllowList:(id)a0;

@end
