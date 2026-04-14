@class NSString, NSNumber, NSArray;

@interface HAPMetadataService : HMFObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *svcDescription;
@property (retain, nonatomic) NSString *uuidStr;
@property (retain, nonatomic) NSString *btleuuidStr;
@property (retain, nonatomic) NSNumber *properties;
@property (retain, nonatomic) NSArray *linkedServices;
@property (retain, nonatomic) NSArray *mandatoryCharacteristics;
@property (retain, nonatomic) NSArray *optionalCharacteristics;
@property (nonatomic) BOOL allowAssociatedService;

- (unsigned long long)hash;
- (void)dump;
- (id)generateDictionary:(id)a0 metadata:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 uuid:(id)a1 description:(id)a2 mandatoryChrTypes:(id)a3 properties:(id)a4 linkedServices:(id)a5;
- (BOOL)isEqual:(id)a0;

@end
