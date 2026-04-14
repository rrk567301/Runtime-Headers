@class NSURL, NSString;

@interface PKPaymentPassActionExternalActionContent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *displayName;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
