@class NSString;

@interface CoreStructuredLocation : CALPropertyValue

@property (retain) NSString *displayName;
@property (retain) NSString *address;
@property (retain) NSString *routeType;

+ (id)entityFromManagedObject:(id)a0;

- (void)setTitle:(id)a0;
- (id)title;
- (double)radius;
- (void)setRadius:(double)a0;
- (id)coordinates;
- (id)abURLString;
- (void)setAbURLString:(id)a0;
- (id)initWithGeoURLString:(id)a0;

@end
