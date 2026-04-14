@class NSString, NSArray, NSMutableSet;

@interface SKGFlight : SKGEntity {
    NSMutableSet *_components;
}

@property (copy, nonatomic) NSString *flight;
@property (readonly, nonatomic) NSArray *components;
@property (copy, nonatomic) NSArray *airportInfo;

- (id)description;
- (void).cxx_destruct;
- (void)addComponent:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
