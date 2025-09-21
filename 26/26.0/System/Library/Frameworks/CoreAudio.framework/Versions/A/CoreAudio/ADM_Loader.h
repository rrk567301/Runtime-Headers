@interface ADM_Loader : NSObject

@property (nonatomic) void *admLibrary;

- (void)dealloc;
- (id)init;
- (id)createFactory;

@end
