@class NSColor, NSString, NSFont;

@interface AVMediaTimelineControlLabelsConfiguration : NSObject <NSCopying> {
    NSString *_textCompositingFilter;
}

@property (nonatomic) double extendedDynamicRangeGain;
@property (nonatomic) unsigned long long labelsStyle;
@property (retain, nonatomic) NSColor *textColor;
@property (retain, nonatomic) NSFont *textFont;

+ (id)_defaultFont;
+ (id)_defaultTextColor;
+ (id)belowConfiguration;
+ (id)hiddenConfiguration;
+ (id)inlineConfiguration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTextCompositingFilter:(id)a0;
- (id)textCompositingFilter;

@end
