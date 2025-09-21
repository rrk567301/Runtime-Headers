@class EMInstantAnswer;

@interface MUIMessageListInstantAnswerSectionDataSource : MUIMessageListSearchSectionDataSource

@property (retain, nonatomic) EMInstantAnswer *instantAnswer;
@property (nonatomic) BOOL didAddInstantAnswer;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)iaDelegate;

@end
