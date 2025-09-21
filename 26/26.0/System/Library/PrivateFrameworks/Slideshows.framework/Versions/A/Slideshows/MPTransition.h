@class NSString, NSMutableDictionary;

@interface MPTransition : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_attributes;
    id _parent;
    BOOL _isRandom;
    long long _randomSeed;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *transitionID;
@property (copy, nonatomic) NSString *presetID;
@property (nonatomic) double duration;

+ (id)transitionWithTransitionID:(id)a0;

- (void)dump;
- (void)setParent:(id)a0;
- (id)parent;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (long long)randomSeed;
- (void)setRandomSeed:(long long)a0;
- (id)parentContainer;
- (id)parentDocument;
- (BOOL)isRandom;
- (void)setIsRandom:(BOOL)a0;
- (void)copyAttribures:(id)a0;
- (double)findMaxDuration;
- (id)_transitionAttributes;
- (void)applyFormattedAttributes;
- (id)convertMPAttributeToMCAttribute:(id)a0 withKey:(id)a1;
- (void)copyVars:(id)a0;
- (id)formattedAttributes;
- (id)fullDebugLog;
- (id)initWithTransitionID:(id)a0;
- (void)setTransitionAttribute:(id)a0 forKey:(id)a1;
- (void)setTransitionAttributes:(id)a0;
- (id)transitionAttributeForKey:(id)a0;
- (id)transitionAttributes;
- (id)transitionPresetID;

@end
