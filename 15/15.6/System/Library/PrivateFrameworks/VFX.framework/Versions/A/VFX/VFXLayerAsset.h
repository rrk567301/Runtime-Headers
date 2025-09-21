@class VFXWorld, CAStateController, NSString, CALayer;

@interface VFXLayerAsset : VFXFileAsset <NSCopying> {
    char _loaded;
    CAStateController *_stateController;
    VFXWorld *_world;
    NSString *_activeStateName;
}

@property (retain, nonatomic) CALayer *rootLayer;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)world;
- (id)stateController;
- (id)activeStateName;
- (void)addWorldReference:(id)a0;
- (void)removeWorldReference:(id)a0;
- (void)setActiveStateName:(id)a0;
- (void)updateActiveState;

@end
