@class NSString, NSMutableDictionary, NSMutableArray;

@interface WBSOpenSearchURLTemplate : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_parametersByName;
    NSMutableArray *_parameters;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *templateString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)URLWithSearchTerms:(id)a0;
- (BOOL)includesParameter:(id)a0;
- (id)templateByAddingParameter:(id)a0 asURLQueryParameter:(id)a1;
- (id)templateBySubstitutingValue:(id)a0 forParameter:(id)a1;
- (id)templateBySubstitutingValues:(id)a0;

@end
