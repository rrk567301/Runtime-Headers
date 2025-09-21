@class GEOApplicationAuditToken;

@interface VKMapViewDescriptor : NSObject

@property (nonatomic) char shouldRasterize;
@property (nonatomic) char inBackground;
@property (nonatomic) double contentScale;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (nonatomic) long long mapViewPurpose;
@property (nonatomic) unsigned char mapKitUsage;
@property (nonatomic) unsigned char mapsUsage;
@property (nonatomic) unsigned char mapKitClientMode;
@property (nonatomic) char allowsAntialiasing;
@property (nonatomic) long long carDisplayType;

+ (id)descriptorWithShouldRasterize:(char)a0 inBackground:(char)a1 contentScale:(double)a2 auditToken:(id)a3 mapViewPurpose:(long long)a4 allowsAntialiasing:(char)a5;

- (id)init;
- (void).cxx_destruct;

@end
