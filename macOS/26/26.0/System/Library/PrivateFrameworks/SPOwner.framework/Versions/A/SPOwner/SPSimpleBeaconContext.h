@class NSString, NSArray;

@interface SPSimpleBeaconContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long fetchProperties;
@property (copy, nonatomic) NSArray *matchingSerialNumbers;
@property (copy, nonatomic) NSArray *matchingFindMyIds;
@property (copy, nonatomic) NSString *repairContextType;
@property (nonatomic) BOOL sendInitialBeacons;
@property (copy, nonatomic) NSArray *matchingBeaconUUIDs;
@property (copy, nonatomic) NSArray *filterBeaconUUIDs;

+ (id)defaultContext;
+ (id)fmipItemContext;
+ (id)deviceManagerContext;
+ (id)fmcaContext;
+ (id)fmipItemContextForBeaconUUIDs:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFetchProperties:(unsigned long long)a0 matchingBeaconUUIDs:(id)a1;
- (id)initWithFetchProperties:(unsigned long long)a0 matchingFindMyIds:(id)a1;
- (id)initWithFetchProperties:(unsigned long long)a0 matchingSerialNumbers:(id)a1;

@end
