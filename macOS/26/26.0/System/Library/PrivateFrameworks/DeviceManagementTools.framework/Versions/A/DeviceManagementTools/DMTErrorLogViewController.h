@class NSError;

@interface DMTErrorLogViewController : NSViewController

@property (readonly, nonatomic) NSError *error;

- (void)loadView;
- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (void)doneButtonClicked:(id)a0;

@end
