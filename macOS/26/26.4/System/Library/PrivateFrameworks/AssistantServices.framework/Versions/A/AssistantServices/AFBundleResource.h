@class NSString;

@interface AFBundleResource : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *extension;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 extension:(id)a1;

@end
