@class NSString, NSArray;

@interface SPSimpleBeaconContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long fetchProperties;
@property (nonatomic) char sendInitialBeacons;
@property (copy, nonatomic) NSArray *filterBeaconUUIDs;

+ (id)defaultContext;
+ (id)fmipItemContext;
+ (id)deviceManagerContext;
+ (id)fmcaContext;
+ (id)fmipItemContextForBeaconUUIDs:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFetchProperties:(unsigned long long)a0 filterBeaconUUIDs:(id)a1;

@end
