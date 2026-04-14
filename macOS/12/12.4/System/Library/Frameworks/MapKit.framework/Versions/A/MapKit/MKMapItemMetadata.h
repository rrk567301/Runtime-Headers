@class NSMutableDictionary, GEOBusiness;

@interface MKMapItemMetadata : NSObject

@property (retain, nonatomic) NSMutableDictionary *imageCache;
@property (readonly, nonatomic) GEOBusiness *business;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBusiness:(id)a0;
- (void)addImage:(id)a0 forURL:(id)a1;
- (id)imageForURL:(id)a0;

@end
