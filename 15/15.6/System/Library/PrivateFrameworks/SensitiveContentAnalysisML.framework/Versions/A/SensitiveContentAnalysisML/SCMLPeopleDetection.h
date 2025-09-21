@class NSArray, NSAttributedString;

@interface SCMLPeopleDetection : NSObject

@property (nonatomic) char hasGenericPeople;
@property (nonatomic) char hasMultiplePeople;
@property (nonatomic) char hasGender;
@property (nonatomic) char hasEthnicity;
@property (nonatomic) char hasAge;
@property (retain, nonatomic) NSArray *spans;
@property (copy, nonatomic) NSAttributedString *rewrittenText;

- (id)init;
- (void).cxx_destruct;

@end
