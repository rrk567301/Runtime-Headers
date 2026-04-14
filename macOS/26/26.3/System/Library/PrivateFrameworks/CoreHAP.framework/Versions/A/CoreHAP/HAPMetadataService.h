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

- (void)dump;
- (id)description;
- (id)initWithName:(id)a0 uuid:(id)a1 description:(id)a2 mandatoryChrTypes:(id)a3 properties:(id)a4 linkedServices:(id)a5;
- (void).cxx_destruct;
- (id)generateDictionary:(id)a0 metadata:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
