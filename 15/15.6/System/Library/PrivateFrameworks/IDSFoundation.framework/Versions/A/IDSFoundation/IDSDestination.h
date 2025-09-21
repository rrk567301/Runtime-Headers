@class NSArray, NSString;

@interface IDSDestination : NSObject <IDSDestinationProtocol, NSCopying>

@property (class, readonly, nonatomic) NSArray *classesForStrictUnarchiving;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) char empty;
@property (readonly, nonatomic, getter=isGuest) char guest;
@property (readonly, nonatomic, getter=isDevice) char device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)destinationWithDestinations:(id)a0;
+ (id)destinationWithDeviceURI:(id)a0;
+ (id)destinationWithRapportPublicIdentifierURI:(id)a0;
+ (id)destinationWithStrings:(id)a0;
+ (id)destinationWithURI:(id)a0;
+ (id)destinationWithAlias:(id)a0 pushToken:(id)a1;
+ (id)defaultPairedDeviceDestination;
+ (id)destinationWithGroup:(id)a0;
+ (id)destinationWithString:(id)a0;
+ (id)destinationWithStringURI:(id)a0 isLightWeight:(char)a1;
+ (id)sentinelSelfAliasDestination;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)destinationURIs;
- (char)isEqualToDestination:(id)a0;
- (id)normalizedURIStrings;
- (id)normalizedURIs;

@end
