@class NSArray;

@interface SCMLTextModerationLMResult : NSObject

@property (nonatomic) BOOL safe;
@property (retain, nonatomic) NSArray *predictions;

- (id)init;
- (void).cxx_destruct;

@end
