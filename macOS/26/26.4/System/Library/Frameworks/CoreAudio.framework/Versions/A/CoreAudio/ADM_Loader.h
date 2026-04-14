@interface ADM_Loader : NSObject

@property (nonatomic) void *admLibrary;

- (id)init;
- (void)dealloc;
- (id)createFactory;

@end
