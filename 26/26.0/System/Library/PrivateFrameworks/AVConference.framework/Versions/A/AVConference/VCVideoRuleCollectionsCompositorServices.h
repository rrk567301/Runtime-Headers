@interface VCVideoRuleCollectionsCompositorServices : VCVideoRuleCollections

+ (id)sharedInstance;
+ (unsigned int)tilesPerFrame;

- (BOOL)setUpHEVCRules;

@end
