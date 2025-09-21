@class CALayer, NSString, CAStateController;

@interface VFXLayerAsset : VFXFileAsset <NSCopying> {
    BOOL _loaded;
    CAStateController *_stateController;
    NSString *_activeStateName;
}

@property (retain, nonatomic) CALayer *rootLayer;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)stateController;
- (id)initWithCoder:(id)a0;
- (void)updateActiveState;
- (id)activeStateName;
- (void)copyTo:(id)a0 withContext:(id)a1;
- (void)setActiveStateName:(id)a0;

@end
