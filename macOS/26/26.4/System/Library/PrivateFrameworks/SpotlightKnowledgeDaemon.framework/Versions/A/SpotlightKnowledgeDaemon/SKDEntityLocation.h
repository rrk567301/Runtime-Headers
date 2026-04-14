@class NSArray, SKDEntityAddress, NSMutableArray;

@interface SKDEntityLocation : SKDEntity {
    NSMutableArray *_expansions;
    NSMutableArray *_keys;
}

@property (nonatomic) unsigned long long geoID;
@property (nonatomic) unsigned long long countryID;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic) double minLat;
@property (nonatomic) double maxLat;
@property (nonatomic) double minLng;
@property (nonatomic) double maxLng;
@property (nonatomic) unsigned long long territoryType;
@property (readonly, nonatomic) unsigned long long territoryCode;
@property (readonly, nonatomic) NSArray *expansions;
@property (readonly, nonatomic) NSArray *keys;
@property (nonatomic) BOOL fromPIR;
@property (nonatomic) unsigned long long factor;
@property (retain, nonatomic) SKDEntityAddress *address;

- (void)addKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (void)addExpansion:(id)a0;
- (double)distance:(id)a0;
- (id)initWithText:(id)a0 identifier:(id)a1 score:(double)a2;
- (BOOL)isParent:(id)a0;

@end
