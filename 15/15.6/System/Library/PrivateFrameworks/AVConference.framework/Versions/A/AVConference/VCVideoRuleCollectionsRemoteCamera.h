@interface VCVideoRuleCollectionsRemoteCamera : VCVideoRuleCollections

+ (id)sharedInstance;
+ (unsigned int)tilesPerFrame;

- (char)setupHEVCRules;

@end
