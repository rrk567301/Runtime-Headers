@class NSString;

@interface LNAssistantContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sessionIdentifier;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (copy, nonatomic) NSString *locale;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSessionIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSessionIdentifier:(id)a0 locale:(id)a1;
- (id)initWithSessionIdentifier:(id)a0 requestIdentifier:(id)a1 locale:(id)a2;

@end
