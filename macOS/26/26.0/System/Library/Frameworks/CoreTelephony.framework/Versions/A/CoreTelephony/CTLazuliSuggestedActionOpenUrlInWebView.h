@class NSURL, NSString;

@interface CTLazuliSuggestedActionOpenUrlInWebView : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long mode;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *parameters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliSuggestedActionOpenUrlInWebView:(id)a0;

@end
