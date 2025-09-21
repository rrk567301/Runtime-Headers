@class NSString, NSArray, GEOPBTransitIncident, NSDate;
@protocol GEOTransitIconDataSource;

@interface _GEOTransitIncident : NSObject <GEOTransitIncident, NSSecureCoding> {
    GEOPBTransitIncident *_incident;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *summary;
@property (readonly, nonatomic) NSString *fullDescription;
@property (readonly, nonatomic) NSString *messageForRoutePlanning;
@property (readonly, nonatomic) NSString *messageForRouteStepping;
@property (readonly, nonatomic) NSString *messageForNonRoutable;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) int iconType;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastUpdated;
@property (readonly, nonatomic, getter=isBlockingIncident) char blockingIncident;
@property (readonly, nonatomic) NSArray *affectedEntities;
@property (readonly, nonatomic) id<GEOTransitIconDataSource> artworkDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIncident:(id)a0;

@end
