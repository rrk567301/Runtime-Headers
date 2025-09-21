@class NSTimeZone, NSString, GEOCacheInvalidationData, GEOMapItemIdentifier, NSArray, NSDateInterval;

@interface GEOPOIEvent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) GEOCacheInvalidationData *invalidationData;
@property (retain, nonatomic) GEOMapItemIdentifier *identifier;
@property (retain, nonatomic) NSString *localizedName;
@property (nonatomic) struct { double latitude; double longitude; } centerCoordinate;
@property (nonatomic) long long expectedAttendance;
@property (retain, nonatomic) NSArray *categories;
@property (retain, nonatomic) NSArray *relatedPOIIdentifiers;
@property (retain, nonatomic) NSDateInterval *dateInterval;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSArray *hours;
@property (retain, nonatomic) NSArray *performers;
@property (readonly, nonatomic, getter=isUpdateRequired) char updateRequired;

+ (char)isUpdateRequiredForInvalidationData:(id)a0;
+ (char)isUpdateRequiredForInvalidationToken:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dateIntervalFromDateTimeRanges:(id)a0;
- (char)configureWithComponents:(id)a0;
- (char)configureWithPOIComponent:(id)a0;
- (char)configureWithPlaceInfoComponent:(id)a0;
- (void)geoPOIEventCommonInit;
- (id)initWithMapItemIdentifier:(id)a0;
- (id)initWithPlace:(id)a0;
- (id)invalidationToken;

@end
