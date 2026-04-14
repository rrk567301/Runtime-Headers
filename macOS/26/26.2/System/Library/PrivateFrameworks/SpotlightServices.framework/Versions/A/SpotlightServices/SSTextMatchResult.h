@class NSString, NSArray;

@interface SSTextMatchResult : NSObject

@property (retain, nonatomic) NSString *source;
@property (nonatomic) float score;
@property (retain, nonatomic) NSArray *termMatches;
@property (retain, nonatomic) NSArray *matchPositions;

- (void)clear;
- (void).cxx_destruct;
- (id)matchInfo;
- (id)description;
- (id)initWithScore:(float)a0;
- (void)addTermMatch:(id)a0;
- (id)matchedStrings;

@end
