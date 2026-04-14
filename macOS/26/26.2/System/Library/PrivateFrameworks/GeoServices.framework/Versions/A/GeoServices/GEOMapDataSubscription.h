@class NSString, NSDate, NSNumber, GEOMapRegion;

@interface GEOMapDataSubscription : NSObject <NSSecureCoding> {
    long long _updateInterval;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic, getter=_originatingBundleIdentifier) NSString *originatingBundleIdentifier;
@property (readonly, nonatomic) NSNumber *regulatoryRegionID;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long dataTypes;
@property (readonly, nonatomic) long long policy;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) double updateInterval;
@property (readonly, nonatomic) GEOMapRegion *region;
@property (readonly, nonatomic) NSString *displayName;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)a0 originatingBundleIdentifier:(id)a1 dataTypes:(unsigned long long)a2 policy:(long long)a3 expirationDate:(id)a4 region:(id)a5 displayName:(id)a6 updateInterval:(long long)a7;

@end
