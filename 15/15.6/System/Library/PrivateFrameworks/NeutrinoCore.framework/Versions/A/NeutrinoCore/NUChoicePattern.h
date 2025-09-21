@class NSArray;

@interface NUChoicePattern : NUPattern

@property (readonly) NSArray *choices;

- (id)init;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)tokens;
- (id)initWithChoices:(id)a0;
- (char)isEqualToChoicePattern:(id)a0;
- (char)isEqualToPattern:(id)a0;
- (char)isFixedOrder;
- (char)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (id)optimizedPattern;
- (id)shortestMatch;

@end
