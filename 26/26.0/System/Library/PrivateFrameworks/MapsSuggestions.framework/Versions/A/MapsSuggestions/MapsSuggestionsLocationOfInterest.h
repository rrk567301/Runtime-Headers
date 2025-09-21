@class GEOMapItemStorage, NSUUID, NSString, NSData, CLLocation, NSDate, NSArray;

@interface MapsSuggestionsLocationOfInterest : NSObject <NSSecureCoding, MapsSuggestionsObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) GEOMapItemStorage *mapItem;
@property (readonly, nonatomic) NSData *mapItemHandle;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSUUID *identifierUUID;
@property (readonly, nonatomic) NSString *identifierString;
@property (readonly, nonatomic) NSString *preferredName;
@property (readonly, nonatomic) NSString *customLabel;
@property (readonly, nonatomic) BOOL isLOIFromMeCard;
@property (readonly, nonatomic) NSString *addressIdentifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long visitCount;
@property (readonly, nonatomic) NSDate *predictedStartDate;
@property (readonly, nonatomic) NSDate *predictedEndDate;
@property (readonly, nonatomic) NSArray *predictionSources;
@property (readonly, nonatomic) NSDate *firstVisit;
@property (readonly, nonatomic) NSDate *lastVisit;
@property (readonly, nonatomic) double probability;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)hydrateMapItemWithNetworkRequester:(id)a0 completion:(id /* block */)a1;
- (id)initWithLOI:(id)a0;
- (id)initWithLOI:(id)a0 predictedDateInterval:(id)a1 probability:(double)a2 predictionSources:(id)a3;
- (BOOL)isHomeOrWork;

@end
