@class NSString;

@interface DUSessionSummary : NSObject

@property (readonly, nonatomic, getter=isRestartRecommended) BOOL restartRecommended;
@property (readonly, copy, nonatomic) NSString *reasonForRestartRecommendation;
@property (readonly, copy, nonatomic) NSString *reasonForRestartRecomendation;

- (id)_init;
- (void).cxx_destruct;

@end
