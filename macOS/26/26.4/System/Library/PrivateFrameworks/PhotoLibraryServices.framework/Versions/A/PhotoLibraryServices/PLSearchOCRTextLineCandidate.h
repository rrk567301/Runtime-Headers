@class NSString, NSArray;

@interface PLSearchOCRTextLineCandidate : NSObject

@property (readonly, nonatomic) NSString *line;
@property (readonly, nonatomic) NSArray *words;
@property (readonly, nonatomic) double confidence;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLine:(id)a0 words:(id)a1 confidence:(double)a2;

@end
