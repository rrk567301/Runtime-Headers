@interface HMMutableHomePersonManagerSettings : HMHomePersonManagerSettings

@property (getter=isFaceClassificationEnabled) char faceClassificationEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEnabled:(char)a0;

@end
