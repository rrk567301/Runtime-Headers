@class NSString, PKLocation, PKSeatingInformation;

@interface PKPassUpcomingPassInformationEntryMetadataEvent : PKPassUpcomingPassInformationEntryMetadata

@property (readonly, nonatomic, getter=isUnannounced) BOOL unannounced;
@property (readonly, nonatomic, getter=isUndetermined) BOOL undetermined;
@property (readonly, nonatomic, getter=isAllDay) BOOL allDay;
@property (readonly, copy, nonatomic) NSString *venueName;
@property (readonly, copy, nonatomic) NSString *venueRegionName;
@property (readonly, nonatomic) PKLocation *venueLocation;
@property (readonly, nonatomic) PKSeatingInformation *seatingInformation;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqualToMetadata:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)populateFromDictionary:(id)a0 bundle:(id)a1 semantics:(id)a2;

@end
