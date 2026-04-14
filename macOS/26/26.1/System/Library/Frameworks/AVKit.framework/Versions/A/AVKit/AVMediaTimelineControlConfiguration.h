@class AVMediaTimelineControlLabelsConfiguration;

@interface AVMediaTimelineControlConfiguration : NSObject <NSCopying>

@property (nonatomic) double extendedDynamicRangeGain;
@property (retain, nonatomic) AVMediaTimelineControlLabelsConfiguration *labelsConfiguration;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
