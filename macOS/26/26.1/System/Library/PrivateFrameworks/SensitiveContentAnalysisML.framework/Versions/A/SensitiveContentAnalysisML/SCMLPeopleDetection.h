@class NSArray, NSAttributedString;

@interface SCMLPeopleDetection : NSObject

@property (nonatomic) BOOL hasGenericPeople;
@property (nonatomic) BOOL hasMultiplePeople;
@property (nonatomic) BOOL hasGender;
@property (nonatomic) BOOL hasEthnicity;
@property (nonatomic) BOOL hasAge;
@property (retain, nonatomic) NSArray *spans;
@property (copy, nonatomic) NSAttributedString *rewrittenText;

- (void).cxx_destruct;
- (id)init;

@end
