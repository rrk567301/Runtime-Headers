@class GEOOriginalWaypointRoute, NSData;

@interface GEOResumeRouteHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GEOOriginalWaypointRoute *routeGeometry;
@property (retain, nonatomic) NSData *serverSessionState;
@property (nonatomic) BOOL hasVisitedFirstStop;

+ (id)resumeRouteHandleStorageFromResumeRouteHandle:(id)a0;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithGEOStorageResumeRouteHandle:(id)a0;
- (id)resumeRouteHandleStorage;

@end
