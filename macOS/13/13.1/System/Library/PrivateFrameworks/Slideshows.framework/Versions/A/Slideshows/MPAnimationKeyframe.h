@class MCAnimationKeyframe, NSMutableDictionary, MPAnimationPath;

@interface MPAnimationKeyframe : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_attributes;
    MPAnimationPath *_parentPath;
    MCAnimationKeyframe *_keyframe;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double time;
@property (nonatomic) unsigned long long offsetType;
@property (nonatomic) double preControl;
@property (nonatomic) double postControl;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dump;
- (id)objectSpecifier;
- (id)parentPath;
- (id)parentDocument;
- (long long)relativeTimeCompare:(id)a0;
- (id)fullDebugLog;
- (void)setParentPath:(id)a0;
- (void)setKeyframe:(id)a0;
- (void)copyVars:(id)a0;

@end
