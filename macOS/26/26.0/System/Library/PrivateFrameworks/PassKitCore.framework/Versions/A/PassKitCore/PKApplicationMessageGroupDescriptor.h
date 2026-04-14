@class NSString;

@interface PKApplicationMessageGroupDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *singularSummary;
@property (readonly, nonatomic) NSString *pluralSummary;

+ (id)createForIdentifier:(id)a0 withSingularSummary:(id)a1 pluralSummary:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
