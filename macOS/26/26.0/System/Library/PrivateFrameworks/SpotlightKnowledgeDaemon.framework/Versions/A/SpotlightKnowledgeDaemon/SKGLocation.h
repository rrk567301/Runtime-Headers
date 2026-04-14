@class NSArray, SKGAddress, NSMutableArray;

@interface SKGLocation : SKGEntity {
    NSMutableArray *_expansions;
    SKGAddress *_address;
}

@property (nonatomic) unsigned long long geoID;
@property (nonatomic) unsigned long long parentID;
@property (nonatomic) unsigned long long countryID;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic) double minLat;
@property (nonatomic) double maxLat;
@property (nonatomic) double minLng;
@property (nonatomic) double maxLng;
@property (nonatomic) long long type;
@property (readonly, nonatomic) NSArray *expansions;
@property (retain, nonatomic) SKGAddress *address;
@property (nonatomic) BOOL fromPIR;
@property (nonatomic) BOOL hitPIRError;
@property (nonatomic) unsigned long long factor;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addExpansion:(id)a0;
- (double)distance:(id)a0;
- (BOOL)isParent:(id)a0;

@end
