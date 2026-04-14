@interface EOSFDRManager : NSObject

+ (id)sharedManager;

- (void)getLocalFDRDataWithCompletionHandler:(id /* block */)a0;

@end
