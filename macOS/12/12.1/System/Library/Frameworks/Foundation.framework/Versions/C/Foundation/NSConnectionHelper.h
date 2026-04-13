@class NSSet, NSConnection;

@interface NSConnectionHelper : NSObject {
    double reqLim;
    double repLim;
    BOOL remoteUsesKeyedDO;
    NSSet *whitelist;
    BOOL useKeyedDO;
    NSConnection *parent;
}

- (void)dealloc;
- (id)init;
- (void)setWhitelist:(id)a0;

@end
