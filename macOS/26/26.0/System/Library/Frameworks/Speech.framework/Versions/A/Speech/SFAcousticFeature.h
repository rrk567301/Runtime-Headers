@class NSArray;

@interface SFAcousticFeature : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *acousticFeatureValuePerFrame;
@property (readonly, nonatomic) double frameDuration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithAcousticFeatureValue:(id)a0 frameDuration:(double)a1;

@end
