@class SiriSharedUISAEViewModel;

@interface SAEViewModelUpdates : NSObject

@property (retain, nonatomic) SiriSharedUISAEViewModel *viewModel;
@property (nonatomic) unsigned long long diff;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0 diff:(unsigned long long)a1;

@end
