@interface TVISPersistentContainer : NSPersistentContainer

@property (readonly, nonatomic, getter=isReady) char ready;

+ (id)defaultDirectoryURL;
+ (id)errorForCode:(long long)a0 underlyingError:(id)a1;

- (char)loadPersistentStoreIfNeededWithError:(id *)a0;

@end
