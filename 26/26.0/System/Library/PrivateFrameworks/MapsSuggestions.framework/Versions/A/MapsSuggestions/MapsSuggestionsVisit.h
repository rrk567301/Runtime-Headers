@class NSUUID, RTPlaceInference, RTLocation, NSDate, NSString;

@interface MapsSuggestionsVisit : NSObject <MapsSuggestionsObject>

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) RTLocation *location;
@property (readonly, copy, nonatomic) NSDate *entry;
@property (readonly, copy, nonatomic) NSDate *exit;
@property (readonly, nonatomic) long long confidence;
@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) RTPlaceInference *placeInference;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRTVisit:(id)a0;

@end
