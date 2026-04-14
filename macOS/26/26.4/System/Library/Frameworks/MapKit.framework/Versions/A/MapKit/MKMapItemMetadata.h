@class NSMutableDictionary, GEOBusiness;

@interface MKMapItemMetadata : NSObject

@property (retain, nonatomic) NSMutableDictionary *imageCache;
@property (readonly, nonatomic) GEOBusiness *business;

- (void).cxx_destruct;
- (id)description;
- (void)addImage:(id)a0 forURL:(id)a1;
- (id)imageForURL:(id)a0;
- (id)initWithBusiness:(id)a0;

@end
