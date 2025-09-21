@class NSXPCConnection;

@interface WallpaperUtils : NSObject

@property (retain) NSXPCConnection *connectionToService;

+ (id)shared;

- (id)connection;
- (void).cxx_destruct;
- (void)copyItemAtPath:(id)a0 toPath:(id)a1;
- (void)removeItemsAtPath:(id)a0;

@end
