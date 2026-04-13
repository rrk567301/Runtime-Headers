@class NSArray;

@interface IFActionsDock : NSObject {
    NSArray *_dockItems;
    unsigned int _port;
    int _tid;
    BOOL _connected;
}

- (void)dealloc;
- (id)init;
- (void)close;
- (BOOL)connect;
- (BOOL)addDockItem:(id)a0 atIndex:(id)a1;
- (BOOL)moveDockItem:(id)a0 toIndex:(id)a1;
- (BOOL)removeDockItem:(id)a0;
- (BOOL)legacyAddDockItem:(id)a0 atIndex:(id)a1;
- (id)getDockItems;
- (BOOL)legacyMoveDockItem:(unsigned int)a0 toIndex:(unsigned int)a1;
- (id)legacyGetDockItems;
- (BOOL)legacyRemoveDockItem:(unsigned int)a0;
- (id)dockPlistPathForUser:(id)a0;

@end
