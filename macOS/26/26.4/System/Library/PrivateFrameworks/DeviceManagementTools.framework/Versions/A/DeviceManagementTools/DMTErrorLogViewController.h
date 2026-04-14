@class NSError;

@interface DMTErrorLogViewController : NSViewController

@property (readonly, nonatomic) NSError *error;

- (id)initWithError:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)doneButtonClicked:(id)a0;

@end
