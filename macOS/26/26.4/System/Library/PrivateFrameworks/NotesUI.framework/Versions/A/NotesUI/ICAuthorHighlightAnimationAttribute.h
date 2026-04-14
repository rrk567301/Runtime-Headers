@class NSColor, NSDate;

@interface ICAuthorHighlightAnimationAttribute : NSObject <NSCopying>

@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) double duration;
@property (nonatomic) double fromValue;
@property (nonatomic) double toValue;
@property (copy, nonatomic) NSColor *color;
@property (nonatomic, getter=isAboveExistingHighlights) BOOL aboveExistingHighlights;
@property (nonatomic, getter=isRemovedOnCompletion) BOOL removedOnCompletion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithStartDate:(id)a0;

@end
