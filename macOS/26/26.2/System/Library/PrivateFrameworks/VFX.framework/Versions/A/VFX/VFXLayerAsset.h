@class CALayer, NSString, CAStateController;

@interface VFXLayerAsset : VFXFileAsset <NSCopying> {
    BOOL _loaded;
    CAStateController *_stateController;
    NSString *_activeStateName;
}

@property (retain, nonatomic) CALayer *rootLayer;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)stateController;
- (void)dealloc;
- (void)updateActiveState;
- (id)activeStateName;
- (void)copyTo:(id)a0 withContext:(id)a1;
- (void)setActiveStateName:(id)a0;

@end
