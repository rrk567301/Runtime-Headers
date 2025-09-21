@interface TSWPDropCapCharacterMetricData : NSObject

@property (readonly, nonatomic) char hasLeadingOffset;
@property (nonatomic) double leadingOffset;
@property (readonly, nonatomic) char hasTrailingOffset;
@property (nonatomic) double trailingOffset;

- (id)init;

@end
