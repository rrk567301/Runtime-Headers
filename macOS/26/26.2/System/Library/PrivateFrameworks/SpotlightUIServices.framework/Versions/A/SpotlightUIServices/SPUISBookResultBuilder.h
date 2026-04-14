@class NSString, NSDate;

@interface SPUISBookResultBuilder : SPUISResultBuilder

@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *genre;
@property (retain, nonatomic) NSDate *date;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCompactCardSection;

@end
