@class NSString;

@interface IMIntroduction : NSObject

@property (retain, nonatomic) NSString *handle;
@property (retain, nonatomic) NSString *suggestedName;

+ (id)introductionWithHandle:(id)a0 suggestedName:(id)a1;

- (void).cxx_destruct;
- (id)convertToCoreRecentsEvent;
- (id)initWithHandle:(id)a0 suggestedName:(id)a1;

@end
