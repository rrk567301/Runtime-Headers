@protocol WBSPageTestDelegate;

@interface WBSPageTestController : WBSTestController

@property (weak) id<WBSPageTestDelegate> delegate;
@property (readonly, nonatomic) unsigned long long pageTestType;
@property (readonly, nonatomic) char allowsContentJavaScript;
@property (readonly, nonatomic) char allowsNetworkAccess;
@property (readonly, nonatomic) char allowsExtensions;

- (void).cxx_destruct;
- (id)bundleFromNSBundle:(id)a0;
- (id)expectedResultsPathExtension;

@end
