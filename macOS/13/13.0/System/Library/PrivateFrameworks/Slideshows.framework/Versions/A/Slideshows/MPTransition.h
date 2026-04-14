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

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)parent;
- (void)dump;
- (void)setParent:(id)a0;
- (long long)randomSeed;
- (id)parentContainer;
- (id)parentDocument;
- (void)setRandomSeed:(long long)a0;
- (BOOL)isRandom;
- (void)setIsRandom:(BOOL)a0;
- (id)transitionAttributeForKey:(id)a0;
- (void)setTransitionAttributes:(id)a0;
- (id)transitionAttributes;
- (id)_transitionAttributes;
- (id)fullDebugLog;
- (void)copyVars:(id)a0;
- (id)formattedAttributes;
- (void)applyFormattedAttributes;
- (id)convertMPAttributeToMCAttribute:(id)a0 withKey:(id)a1;
- (id)initWithTransitionID:(id)a0;
- (void)setTransitionAttribute:(id)a0 forKey:(id)a1;
- (double)findMaxDuration;
- (id)transitionPresetID;
- (void)copyAttribures:(id)a0;

@end
