@class NSString;

@interface WiFiAwareInternetSharingConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *interfaceName;
@property (nonatomic) char provider;
@property (nonatomic) char automatic;
@property (nonatomic) char useBridging;

+ (id)automaticallyProvideInternetToResponders;
+ (id)automaticallyRequestInternetFromInitiators;
+ (id)provideInternetToInitiatorsFromInterface:(id)a0;
+ (id)requestInterentFromResponder;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInterfaceName:(id)a0 isProvider:(char)a1 isAutomatic:(char)a2;
- (char)interfaceNameEqual:(id)a0;

@end
