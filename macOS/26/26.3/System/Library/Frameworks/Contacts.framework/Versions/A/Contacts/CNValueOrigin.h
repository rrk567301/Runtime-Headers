@class NSString;

@interface CNValueOrigin : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localizedApplicationName;
@property (readonly, copy, nonatomic) NSString *donationIdentifier;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLocalizedApplicationName:(id)a0 donationIdentifier:(id)a1;

@end
