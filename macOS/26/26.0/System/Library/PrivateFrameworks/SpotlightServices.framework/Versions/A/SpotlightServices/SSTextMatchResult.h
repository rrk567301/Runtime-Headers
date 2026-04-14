@class NSString, NSArray;

@interface SSTextMatchResult : NSObject

@property (retain, nonatomic) NSString *source;
@property (nonatomic) float score;
@property (retain, nonatomic) NSArray *termMatches;
@property (retain, nonatomic) NSArray *matchPositions;

- (id)matchInfo;
- (void)clear;
- (id)initWithScore:(float)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addTermMatch:(id)a0;
- (id)matchedStrings;

@end
