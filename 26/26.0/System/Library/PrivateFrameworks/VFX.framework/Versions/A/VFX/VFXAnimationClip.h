@class NSString, VFXAnimation;

@interface VFXAnimationClip : NSObject <VFXAsset, NSSecureCoding, NSCopying> {
    NSString *_name;
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) VFXAnimation *animation;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clipWithAnimation:(id)a0 name:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setAnimation:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)copyTo:(id)a0 withContext:(id)a1;

@end
