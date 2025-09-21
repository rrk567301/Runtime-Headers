@class NSArray, NSString;

@interface GEOMapsSearchHomeResult : NSObject

@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSString *cachedNaturalSearchKey;

- (void).cxx_destruct;
- (id)initWithMapsSearchHomeResult:(id)a0 mapsResults:(id)a1;

@end
