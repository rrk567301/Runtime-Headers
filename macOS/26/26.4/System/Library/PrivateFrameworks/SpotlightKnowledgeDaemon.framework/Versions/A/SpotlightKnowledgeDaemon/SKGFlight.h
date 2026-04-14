@class NSString, NSArray, NSMutableSet;

@interface SKGFlight : SKGEntity {
    NSMutableSet *_components;
}

@property (copy, nonatomic) NSString *flight;
@property (readonly, nonatomic) NSArray *components;
@property (copy, nonatomic) NSArray *airportInfo;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)addComponent:(id)a0;
- (id)description;

@end
