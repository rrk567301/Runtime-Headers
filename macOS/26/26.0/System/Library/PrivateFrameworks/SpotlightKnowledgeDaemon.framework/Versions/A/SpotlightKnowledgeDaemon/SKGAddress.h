@class NSString, NSArray, NSMutableSet, NSMutableArray;

@interface SKGAddress : SKGEntity {
    NSMutableArray *_components;
    NSMutableSet *_locationValues;
}

@property (copy, nonatomic) NSString *address;
@property (readonly, nonatomic) NSArray *synonyms;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *area;
@property (copy, nonatomic) NSString *areaCode;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *countryCode;

- (id)description;
- (void)addComponent:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
