@class NSArray;

@interface RTLocationDownsamplerTree : NSObject

@property (retain, nonatomic) RTLocationDownsamplerTree *left;
@property (retain, nonatomic) RTLocationDownsamplerTree *right;
@property (retain, nonatomic) NSArray *locations;
@property (nonatomic) double maximumError;
@property (nonatomic) unsigned long long maximumErrorIndex;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLocations:(id)a0 errorFunction:(id /* block */)a1;
- (double)evaluateLocationsWithErrorFunction:(id /* block */)a0;
- (void)splitLocationsWithErrorFunction:(id /* block */)a0;
- (id)allLocations;
- (id)sampledLocations;

@end
