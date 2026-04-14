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

- (void)cleanup;
- (id)key;
- (id)parent;
- (void)setParent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)parentDocument;
- (id)animatedKey;
- (id)animatedParent;
- (id)animationPath;
- (void)setAnimationPath:(id)a0;

@end
