@class NSColor;

@interface LPVideoProperties : LPVisualMediaProperties <NSCopying>

@property (retain, nonatomic, setter=_setOverlappingControlsColor:) NSColor *_overlappingControlsColor;
@property (nonatomic) char hasAudio;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
