@class PDSUser, PDSRegistration, NSString;

@interface PDSEntry : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PDSUser *user;
@property (readonly, nonatomic) PDSRegistration *registration;
@property (readonly, nonatomic) unsigned char state;
@property (readonly, nonatomic) NSString *clientID;

- (BOOL)isEqualToEntry:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithUser:(id)a0 registration:(id)a1 clientID:(id)a2 state:(unsigned char)a3;
- (void).cxx_destruct;
- (id)initWithUser:(id)a0 registration:(id)a1 clientID:(id)a2;
- (unsigned long long)hash;
- (id)entryWithUpdatedState:(unsigned char)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
