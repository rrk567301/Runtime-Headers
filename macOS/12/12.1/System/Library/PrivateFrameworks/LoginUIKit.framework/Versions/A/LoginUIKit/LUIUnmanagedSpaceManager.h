@class NSMutableDictionary;

@interface LUIUnmanagedSpaceManager : NSObject

@property (retain) NSMutableDictionary *unmanagedSpaces;

+ (id)sharedUnmanagedSpaceManager;

- (void)dealloc;
- (id)init;
- (id)unmanagedSpaceForLevel:(int)a0;

@end
