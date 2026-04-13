@class NSMutableSet;

@interface LUIUnmanagedSpace : NSObject

@property unsigned long long spaceID;
@property struct __CFArray { } *spaceIDs;
@property (retain) NSMutableSet *windowIDs;
@property long long shownCount;
@property (readonly) int level;

+ (id)unmanagedSpaceWithLevel:(int)a0;

- (void)dealloc;
- (id)description;
- (void)removeWindow:(id)a0;
- (void)addWindow:(id)a0;
- (id)initWithLevel:(int)a0;
- (long long)_numWindowsInSpace;
- (void)addWindows:(id)a0;
- (void)_setupSpace;
- (void)removeWindows:(id)a0;
- (void)_cleanupSpace;
- (void)showSpace;
- (void)hideSpace;

@end
