@class MCAnimationPath, NSObject;
@protocol MPAnimationSupport;

@interface MPAnimationPath : NSObject <NSSecureCoding, NSCopying> {
    BOOL _isTriggered;
    NSObject<MPAnimationSupport> *_parentObject;
    MCAnimationPath *_animationPath;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL isTriggered;

+ (id)animationPath;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)cleanup;
- (id)parent;
- (id)key;
- (void)setParent:(id)a0;
- (id)parentDocument;
- (id)animationPath;
- (id)animatedParent;
- (id)animatedKey;
- (void)setAnimationPath:(id)a0;

@end
