@class NSArray;

@interface CHMathPostProcessingManager : NSObject

@property (retain, nonatomic) NSArray *sequence;

+ (id)tokenizedTextResultFromTokenizedMathResult:(id)a0 locale:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStep:(id)a0;
- (id)initWithSequence:(id)a0;
- (id)process:(id)a0 options:(id)a1;

@end
