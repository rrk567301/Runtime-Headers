@interface SKDiskImageChpassParams : NSObject

@property (nonatomic) BOOL stdinPassPhrase;

- (id)init;
- (id)diChpassParamsWithURL:(id)a0 error:(id *)a1;
- (void)setupDIChpassParams:(id)a0;

@end
