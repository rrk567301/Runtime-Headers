@class NSData;

@interface ATXEncodedToolInvocationWithContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *encodedInvocation;
@property (readonly, nonatomic) unsigned long long context;

+ (id)localizedStringForParameterSuggestionContext:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEncodedInvocation:(id)a0 context:(unsigned long long)a1;

@end
