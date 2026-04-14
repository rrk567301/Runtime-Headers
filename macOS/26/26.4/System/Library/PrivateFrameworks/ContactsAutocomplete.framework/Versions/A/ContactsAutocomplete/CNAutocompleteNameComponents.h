@class NSString;

@interface CNAutocompleteNameComponents : NSObject <NSCopying>

@property (readonly) NSString *firstName;
@property (readonly) NSString *lastName;
@property (readonly) NSString *nickname;
@property (readonly) NSString *nameSuffix;

+ (id)nameComponentsWithFirstName:(id)a0 lastName:(id)a1 nickname:(id)a2 nameSuffix:(id)a3;
+ (id)contactKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
