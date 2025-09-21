@class NSMutableDictionary;

@interface TIKeyboardLayoutFactory : NSObject

@property (readonly, nonatomic) void *layoutsLibraryHandle;
@property (retain) NSMutableDictionary *internalCache;

+ (id)layoutsFileName;
+ (id)sharedKeyboardFactory;

- (id)init;
- (void).cxx_destruct;
- (id)keyboardPrefixForWidth:(double)a0 andEdge:(char)a1;
- (id)keyboardWithName:(id)a0 inCache:(id)a1;

@end
