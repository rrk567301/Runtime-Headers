@class NSString, CTLazuliSuggestedActionShowCoordinates, CTLazuliSuggestedActionShowQuery;

@interface CTLazuliSuggestedActionShowLocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTLazuliSuggestedActionShowCoordinates *coordinates;
@property (retain, nonatomic) CTLazuliSuggestedActionShowQuery *query;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *fallbackUrl;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliSuggestedActionShowLocation:(id)a0;

@end
