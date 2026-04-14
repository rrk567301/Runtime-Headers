@class NSString, NSArray, SKGAddress, NSMutableArray;

@interface SKGLocation : SKGEntity {
    NSMutableArray *_expansions;
    NSMutableArray *_keys;
    SKGAddress *_address;
}

@property (copy, nonatomic) NSString *key;
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
@property (readonly, nonatomic) NSArray *synonyms;
@property (readonly, nonatomic) NSArray *expansions;
@property (readonly, nonatomic) NSArray *keys;
@property (retain, nonatomic) SKGAddress *address;
@property (nonatomic) BOOL fromPIR;
@property (nonatomic) BOOL hitPIRError;
@property (nonatomic) unsigned long long factor;

- (void)addKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (void)addExpansion:(id)a0;
- (double)distance:(id)a0;
- (BOOL)isParent:(id)a0;

@end
