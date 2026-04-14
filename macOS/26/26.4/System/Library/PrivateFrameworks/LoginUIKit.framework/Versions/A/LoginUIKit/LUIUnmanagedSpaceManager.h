@class NSMutableDictionary;

@interface LUIUnmanagedSpaceManager : NSObject

@property (retain) NSMutableDictionary *unmanagedSpaces;

+ (id)sharedUnmanagedSpaceManager;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)unmanagedSpaceForLevel:(int)a0;

@end
