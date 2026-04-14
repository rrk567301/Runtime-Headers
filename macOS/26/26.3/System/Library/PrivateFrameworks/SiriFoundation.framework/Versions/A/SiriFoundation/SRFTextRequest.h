@class NSString;

@interface SRFTextRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *utteranceText;
@property (nonatomic) long long serviceProvider;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUtteranceText:(id)a0 serviceProvider:(long long)a1;

@end
