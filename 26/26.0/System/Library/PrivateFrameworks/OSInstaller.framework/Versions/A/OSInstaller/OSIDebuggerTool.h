@class NSString, OSInstallOptions;

@interface OSIDebuggerTool : NSObject

@property (retain) OSInstallOptions *options;
@property (retain) NSString *opToFail;
@property BOOL shouldFailAtStart;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (BOOL)loadDebuggerPropertyList;
- (BOOL)shouldFailAtQueueElement:(id)a0;

@end
