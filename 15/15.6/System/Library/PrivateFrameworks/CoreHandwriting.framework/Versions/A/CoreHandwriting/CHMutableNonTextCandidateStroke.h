@class NSDictionary;

@interface CHMutableNonTextCandidateStroke : CHNonTextCandidateStroke

@property (retain, nonatomic) NSDictionary *supportByStrokeIdentifier;
@property (retain, nonatomic) NSDictionary *sizeRatioByStrokeIdentifier;
@property (nonatomic) long long fallbackClassification;

- (id)description;
- (char)adjustSupportByAddingStroke:(id)a0 consistingOfSubstrokes:(id)a1 strokeClassification:(long long)a2;
- (char)adjustSupportByRemovingStrokeIdentifier:(id)a0;
- (char)canBeSupportedByStrokeAtYPosition:(double)a0;
- (void)setFallbackClassification:(long long)a0;
- (void)setSupportByStrokeIdentifier:(id)a0;

@end
