@class NSString;

@interface HAPMetadataUnit : HMFObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *unitDescription;

+ (id)init:(id)a0 withDictionary:(id)a1;

- (id)generateDictionary;
- (void)dump;
- (id)description;
- (id)initWithName:(id)a0 description:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
