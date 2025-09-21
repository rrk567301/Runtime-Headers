@class NSColor, NSDate;

@interface ICAuthorHighlightAnimationAttribute : NSObject <NSCopying>

@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) double duration;
@property (nonatomic) double fromValue;
@property (nonatomic) double toValue;
@property (copy, nonatomic) NSColor *color;
@property (nonatomic, getter=isAboveExistingHighlights) char aboveExistingHighlights;
@property (nonatomic, getter=isRemovedOnCompletion) char removedOnCompletion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0;

@end
