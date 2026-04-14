@class NSMutableDictionary;

@interface LUIUnmanagedSpaceManager : NSObject

@property (retain) NSMutableDictionary *unmanagedSpaces;

+ (id)sharedUnmanagedSpaceManager;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)unmanagedSpaceForLevel:(int)a0;

@end
