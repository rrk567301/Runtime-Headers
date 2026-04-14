@class NSString, NSNumber;

@interface HAPMetadataProperty : HMFObject

@property (retain, nonatomic) NSString *propertyType;
@property (retain, nonatomic) NSNumber *bitPosition;
@property (copy) NSString *propertyDescription;

+ (id)init:(id)a0 withDictionary:(id)a1;

- (id)initWithType:(id)a0 bitPosition:(id)a1 description:(id)a2;
- (id)generateDictionary;
- (unsigned long long)hash;
- (void)dump;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
