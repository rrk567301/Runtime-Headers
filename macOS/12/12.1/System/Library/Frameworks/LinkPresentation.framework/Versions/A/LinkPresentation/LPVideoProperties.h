@class NSColor, NSString;

@interface LPVideoProperties : NSObject <NSCopying>

@property (retain, nonatomic, setter=_setOverlappingControlsColor:) NSColor *_overlappingControlsColor;
@property (nonatomic) BOOL hasAudio;
@property (copy, nonatomic) NSString *accessibilityText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
