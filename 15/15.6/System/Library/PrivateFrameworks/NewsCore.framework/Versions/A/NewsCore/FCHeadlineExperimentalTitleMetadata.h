@class NSString;

@interface FCHeadlineExperimentalTitleMetadata : NSObject

@property (readonly, nonatomic) char isTitleExperimental;
@property (readonly, nonatomic) long long arrayIndexUsedforTitle;
@property (readonly, nonatomic) int treatmentState;
@property (readonly, copy, nonatomic) NSString *chosenTitle;

- (void).cxx_destruct;
- (id)initWithChosenTitle:(id)a0 isTitleExperimental:(char)a1 arrayIndexUsedforTitle:(long long)a2 treatmentState:(int)a3;

@end
