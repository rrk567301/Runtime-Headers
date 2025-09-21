@class NSString;

@interface WFType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *typeDescription;
@property (readonly, copy, nonatomic) NSString *string;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)conformsToType:(id)a0;
- (char)isEqualToClass:(Class)a0;
- (char)conformsToClass:(Class)a0;
- (char)conformsToString:(id)a0;
- (char)conformsToTypes:(id)a0;
- (char)conformsToUTType:(id)a0;
- (char)isEqualToType:(id)a0;
- (char)isEqualToUTType:(id)a0;

@end
