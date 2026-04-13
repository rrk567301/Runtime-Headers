@class NSString, CWFChannel, NSDictionary, NSDate, CLLocation;

@interface CWFBSS : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *BSSID;
@property (copy, nonatomic) CWFChannel *channel;
@property (copy, nonatomic) NSDate *lastAssociatedAt;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSDictionary *OSSpecificAttributes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)externalForm;
- (id)initWithExternalForm:(id)a0;
- (BOOL)isEqualToBSS:(id)a0;

@end
