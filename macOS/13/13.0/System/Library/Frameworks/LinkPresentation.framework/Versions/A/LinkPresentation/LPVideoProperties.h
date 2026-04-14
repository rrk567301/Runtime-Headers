@class NSColor, NSString;

@interface LPVideoProperties : NSObject <NSCopying>

@property (retain, nonatomic, setter=_setOverlappingControlsColor:) NSColor *_overlappingControlsColor;
@property (nonatomic) BOOL hasAudio;
@property (copy, nonatomic) NSString *accessibilityText;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
