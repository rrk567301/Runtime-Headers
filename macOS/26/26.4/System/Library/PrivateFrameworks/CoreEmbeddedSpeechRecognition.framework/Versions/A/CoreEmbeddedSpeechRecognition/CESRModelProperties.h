@class NSString;

@interface CESRModelProperties : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *modelVersion;
@property (readonly, copy, nonatomic) NSString *modelType;
@property (readonly, copy, nonatomic) NSString *modelRoot;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithModelVersion:(id)a0 modelType:(id)a1 modelRoot:(id)a2;

@end
