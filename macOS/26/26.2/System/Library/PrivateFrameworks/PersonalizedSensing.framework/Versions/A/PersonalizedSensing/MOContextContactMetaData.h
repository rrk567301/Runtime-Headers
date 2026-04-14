@class NSString;

@interface MOContextContactMetaData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contactName;
@property (readonly, copy, nonatomic) NSString *contextContactIdentifier;
@property (readonly, copy, nonatomic) NSString *mdEntityIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithContactIdentifier:(id)a0 contactName:(id)a1 mdEntityIdentifier:(id)a2;
- (id)initWithContactName:(id)a0;

@end
