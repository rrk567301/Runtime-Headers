@class NSString, NSArray, NSMutableSet;

@interface SKGFlight : SKGEntity {
    NSMutableSet *_components;
}

@property (copy, nonatomic) NSString *flight;
@property (readonly, nonatomic) NSArray *components;
@property (copy, nonatomic) NSArray *airportInfo;

- (unsigned long long)hash;
- (void)addComponent:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
