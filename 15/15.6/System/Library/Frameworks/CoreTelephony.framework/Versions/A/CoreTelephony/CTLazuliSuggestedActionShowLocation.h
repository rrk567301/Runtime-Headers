@class NSString, CTLazuliSuggestedActionShowCoordinates, CTLazuliSuggestedActionShowQuery;

@interface CTLazuliSuggestedActionShowLocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) CTLazuliSuggestedActionShowCoordinates *coordinates;
@property (retain, nonatomic) CTLazuliSuggestedActionShowQuery *query;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *fallbackUrl;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliSuggestedActionShowLocation:(id)a0;

@end
