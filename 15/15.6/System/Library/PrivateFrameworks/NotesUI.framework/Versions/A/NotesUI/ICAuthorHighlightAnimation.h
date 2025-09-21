@class NSNumber, NSColor;

@interface ICAuthorHighlightAnimation : NSObject

@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *fromValue;
@property (copy, nonatomic) NSNumber *toValue;
@property (copy, nonatomic) NSColor *color;
@property (nonatomic, getter=isAboveExistingHighlights) char aboveExistingHighlights;
@property (nonatomic, getter=isRemovedOnCompletion) char removedOnCompletion;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
