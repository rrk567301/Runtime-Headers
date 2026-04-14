@class NSUUID, NSArray, RTLocation, NSDate;

@interface RTBluePOIQuery : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSArray *accessPoints;
@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) RTLocation *referenceLocation;
@property (readonly, nonatomic) unsigned long long settledState;
@property (readonly, nonatomic) BOOL selectedToLabel;
@property (readonly, nonatomic) NSDate *date;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)getCLLocations;
- (id)initWithFirstJSONDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 accessPoints:(id)a1 locations:(id)a2 referenceLocation:(id)a3 settledState:(unsigned long long)a4 selectedToLabel:(BOOL)a5 date:(id)a6;
- (id)outputToDictionary;
- (id)outputToFirstJSONDictionary;

@end
