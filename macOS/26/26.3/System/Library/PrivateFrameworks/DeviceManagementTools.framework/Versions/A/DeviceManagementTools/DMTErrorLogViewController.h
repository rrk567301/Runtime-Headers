@class NSError;

@interface DMTErrorLogViewController : NSViewController

@property (readonly, nonatomic) NSError *error;

- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)doneButtonClicked:(id)a0;

@end
