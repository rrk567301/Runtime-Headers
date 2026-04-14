@class NSMutableDictionary;

@interface LUIUnmanagedSpaceManager : NSObject

@property (retain) NSMutableDictionary *unmanagedSpaces;

+ (id)sharedUnmanagedSpaceManager;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)unmanagedSpaceForLevel:(int)a0;

@end
