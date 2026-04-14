@class NSString, NSNumber;

@interface HAPMetadataProperty : HMFObject

@property (retain, nonatomic) NSString *propertyType;
@property (retain, nonatomic) NSNumber *bitPosition;
@property (copy) NSString *propertyDescription;

+ (id)init:(id)a0 withDictionary:(id)a1;

- (id)generateDictionary;
- (void)dump;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(id)a0 bitPosition:(id)a1 description:(id)a2;
- (void).cxx_destruct;
- (id)description;

@end
