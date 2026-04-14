@class NSColor;

@interface LPVideoProperties : LPVisualMediaProperties <NSCopying>

@property (retain, nonatomic, setter=_setOverlappingControlsColor:) NSColor *_overlappingControlsColor;
@property (nonatomic) BOOL hasAudio;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
