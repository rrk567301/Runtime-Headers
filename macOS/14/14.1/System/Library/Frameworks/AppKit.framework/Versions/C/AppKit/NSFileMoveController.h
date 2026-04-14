@interface NSFileMoveController : NSObject

@property (readonly) BOOL began;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithURL:(id)a0;
- (void)_beginForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginForWindow:(id)a0 completionHandler:(id /* block */)a1;

@end
