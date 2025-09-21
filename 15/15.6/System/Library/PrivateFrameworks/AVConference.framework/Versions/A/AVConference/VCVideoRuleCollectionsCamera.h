@interface VCVideoRuleCollectionsCamera : VCVideoRuleCollections {
    char _encodeHighDef;
    char _decodeHighDef;
}

+ (id)sharedInstance;

- (double)preferredAspectRatio;
- (void)limitVideoRules;
- (id)bestVideoRuleForEncodingType:(unsigned char)a0 aspectRatio:(double)a1;
- (id)bestVideoRuleForEncodingType:(unsigned char)a0 aspectRatio:(double)a1 payload:(int)a2;
- (struct _VCBitrateConfiguration { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } *)bitrateConfiguration;
- (char)getBestFrameWidth:(int *)a0 frameHeight:(int *)a1 frameRate:(float *)a2;
- (char)isHiDefCapable;
- (void)resetEncodingRulesForCameraIsHD:(char)a0 isWVGA:(char)a1 is1080:(char)a2;
- (char)setupH264CellularRules;
- (char)useSoftFramerateSwitching;

@end
