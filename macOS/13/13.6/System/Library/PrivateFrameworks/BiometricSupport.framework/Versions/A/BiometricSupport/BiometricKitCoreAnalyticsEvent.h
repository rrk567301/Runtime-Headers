@class NSString, NSArray, NSDictionary, NSDate, NSNumber;

@interface BiometricKitCoreAnalyticsEvent : NSObject {
    NSString *_eventName;
    NSArray *_privateProperties;
    NSDictionary *_boundedFieldLimits;
}

@property (retain) NSNumber *eventCanceled;
@property (retain) NSNumber *displayOn;
@property (retain) NSNumber *deviceEnclosureColor;
@property (retain, nonatomic) NSNumber *timeSinceLastEnrollment;
@property (retain) NSNumber *timeSinceLastEnrollmentBinned;
@property (retain) NSNumber *timeSinceLastEvent;
@property (retain) NSDate *previousEventDate;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)reset;
- (id)dictionaryRepresentation;
- (void)setNilValueForKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)initWithName:(id)a0 dictionary:(id)a1;
- (id)dictionaryRepresentationArchiving:(BOOL)a0;
- (id)dictionaryRepresentationForClass:(Class)a0;
- (id)getEventDictionary;
- (void)incrementCountField:(id)a0;
- (id)initWithPersistedDataWithName:(id)a0;
- (void)logAnalyticsDictionary:(id)a0;
- (void)persistData;
- (BOOL)postEvent;
- (void)resetClass:(Class)a0;
- (void)updateBoundedFieldValue;

@end
