@class NSString;

@interface EMCategory : NSObject <EFCacheable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long subtype;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) BOOL isPrimary;
@property (readonly, nonatomic) BOOL isHighImpact;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_shortDescription;
- (id)initWithType:(unsigned long long)a0 state:(unsigned long long)a1;
- (id)cachedSelf;
- (id)initWithType:(unsigned long long)a0 subtype:(unsigned long long)a1 isHighImpact:(BOOL)a2 state:(unsigned long long)a3;

@end
