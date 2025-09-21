@class NSString, OSInstallOptions;

@interface OSIDebuggerTool : NSObject

@property (retain) OSInstallOptions *options;
@property (retain) NSString *opToFail;
@property char shouldFailAtStart;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (char)loadDebuggerPropertyList;
- (char)shouldFailAtQueueElement:(id)a0;

@end
