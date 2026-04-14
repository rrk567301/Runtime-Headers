@class NSURL, NSString;

@interface _SFModelProperties : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *modelRoot;
@property (readonly, copy, nonatomic) NSString *modelVersion;
@property (readonly, copy, nonatomic) NSString *modelQualityType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithModelRoot:(id)a0 modelVersion:(id)a1 modelQualityType:(id)a2;

@end
