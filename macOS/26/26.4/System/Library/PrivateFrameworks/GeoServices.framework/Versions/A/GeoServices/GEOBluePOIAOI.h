@class NSData, NSArray;

@interface GEOBluePOIAOI : NSObject

@property (readonly, nonatomic) NSData *aoiData;
@property (readonly, nonatomic) NSArray *polygons;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAOIData:(id)a0 polygons:(id)a1;

@end
