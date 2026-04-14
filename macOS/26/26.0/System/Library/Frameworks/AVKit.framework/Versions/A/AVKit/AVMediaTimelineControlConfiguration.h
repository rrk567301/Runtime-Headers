@class AVMediaTimelineControlLabelsConfiguration;

@interface AVMediaTimelineControlConfiguration : NSObject <NSCopying>

@property (nonatomic) double extendedDynamicRangeGain;
@property (retain, nonatomic) AVMediaTimelineControlLabelsConfiguration *labelsConfiguration;

+ (id)defaultConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
