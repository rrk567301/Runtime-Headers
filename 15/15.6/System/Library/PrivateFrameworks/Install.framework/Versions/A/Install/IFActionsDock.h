@class NSArray;

@interface IFActionsDock : NSObject {
    NSArray *_dockItems;
    unsigned int _port;
    int _tid;
    char _connected;
}

- (void)dealloc;
- (id)init;
- (void)close;
- (char)connect;
- (char)removeDockItem:(id)a0;
- (char)addDockItem:(id)a0 atIndex:(id)a1;
- (id)dockPlistPathForUser:(id)a0;
- (id)getDockItems;
- (char)legacyAddDockItem:(id)a0 atIndex:(id)a1;
- (id)legacyGetDockItems;
- (char)legacyMoveDockItem:(unsigned int)a0 toIndex:(unsigned int)a1;
- (char)legacyRemoveDockItem:(unsigned int)a0;
- (char)moveDockItem:(id)a0 toIndex:(id)a1;

@end
