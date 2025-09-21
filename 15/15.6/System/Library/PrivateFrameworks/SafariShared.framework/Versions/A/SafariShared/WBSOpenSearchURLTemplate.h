@class NSString, NSMutableDictionary, NSMutableArray;

@interface WBSOpenSearchURLTemplate : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_parametersByName;
    NSMutableArray *_parameters;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *templateString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)URLWithSearchTerms:(id)a0;
- (char)includesParameter:(id)a0;
- (id)templateByAddingParameter:(id)a0 asURLQueryParameter:(id)a1;
- (id)templateBySubstitutingValue:(id)a0 forParameter:(id)a1;
- (id)templateBySubstitutingValues:(id)a0;

@end
