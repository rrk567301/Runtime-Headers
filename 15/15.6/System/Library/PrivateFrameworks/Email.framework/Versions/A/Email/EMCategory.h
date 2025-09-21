@class NSString;

@interface EMCategory : NSObject <EFCacheable, EFPubliclyDescribable, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long subtype;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) char isPrimary;
@property (readonly, nonatomic) char isHighImpact;
@property (readonly, nonatomic) char isUncategorized;
@property (readonly, nonatomic) char needsRecategorization;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 state:(unsigned long long)a1;
- (id)_shortDescription;
- (id)cachedSelf;
- (id)initWithType:(unsigned long long)a0 subtype:(unsigned long long)a1 isHighImpact:(char)a2 state:(unsigned long long)a3;

@end
