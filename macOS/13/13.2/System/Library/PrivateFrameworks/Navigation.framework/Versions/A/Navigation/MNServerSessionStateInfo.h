@class NSData, NSUUID;

@interface MNServerSessionStateInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *sessionState;
@property (readonly, nonatomic) NSUUID *uniqueRouteID;
@property (readonly, nonatomic) NSData *directionsResponseID;
@property (readonly, nonatomic) NSData *etauResponseID;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateWithRoute:(id)a0;
- (void)updateWithETAUResponse:(id)a0;

@end
