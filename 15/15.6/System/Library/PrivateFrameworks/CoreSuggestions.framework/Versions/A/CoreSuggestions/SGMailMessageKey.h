@class NSString;

@interface SGMailMessageKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *messageId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSource:(id)a0 messageId:(id)a1;
- (char)isEqualToMailMessageKey:(id)a0;

@end
