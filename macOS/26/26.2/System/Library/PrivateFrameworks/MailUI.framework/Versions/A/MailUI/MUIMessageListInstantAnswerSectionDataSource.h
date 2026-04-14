@class EMInstantAnswer;

@interface MUIMessageListInstantAnswerSectionDataSource : MUIMessageListSearchSectionDataSource

@property (retain, nonatomic) EMInstantAnswer *instantAnswer;
@property (nonatomic) BOOL didAddInstantAnswer;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)iaDelegate;

@end
