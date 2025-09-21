@class NSArray, NSBundle;

@interface IASetupPlugin : NSObject

@property (retain) NSBundle *bundle;
@property (readonly) NSArray *services;

- (id)initWithBundle:(id)a0;
- (void).cxx_destruct;
- (id)setupViewControllerForServices:(id)a0;

@end
