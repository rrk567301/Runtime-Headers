@class NSURL, NSString;

@interface CTLazuliSuggestedActionOpenUrlInWebView : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long mode;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *parameters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliSuggestedActionOpenUrlInWebView:(id)a0;

@end
