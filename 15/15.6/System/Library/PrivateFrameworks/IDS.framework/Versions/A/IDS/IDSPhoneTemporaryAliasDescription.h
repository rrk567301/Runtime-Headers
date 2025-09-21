@class IDSURI, NSDate;

@interface IDSPhoneTemporaryAliasDescription : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) IDSURI *URI;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) char selected;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURI:(id)a0 expirationDate:(id)a1 selected:(char)a2;

@end
