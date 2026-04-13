@class NSColor;

@interface SolidColorGeneratorClip : MotionGeneratorClip

@property (retain, nonatomic) NSColor *color;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)plistRepresentationFromProject:(id)a0;
- (void)setContentsFromPlist:(id)a0 inProject:(id)a1;
- (id)generatorEffect;

@end
