@protocol WBSPageTestDelegate;

@interface WBSPageTestController : WBSTestController

@property (weak) id<WBSPageTestDelegate> delegate;
@property (readonly, nonatomic) unsigned long long pageTestType;

- (void).cxx_destruct;
- (id)bundleFromNSBundle:(id)a0;
- (id)expectedResultsPathExtension;

@end
