@class NSString, NSArray, NSDictionary, NSDate, NSNumber;

@interface BiometricKitCoreAnalyticsEvent : NSObject {
    NSString *_eventName;
    NSArray *_privateProperties;
    NSDictionary *_boundedFieldLimits;
}

@property (retain, nonatomic) NSNumber *eventCanceled;
@property (retain, nonatomic) NSNumber *displayOn;
@property (retain, nonatomic) NSNumber *passcodeSet;
@property (retain, nonatomic) NSNumber *deviceEnclosureColor;
@property (retain, nonatomic) NSNumber *timeSinceLastEnrollment;
@property (retain, nonatomic) NSNumber *timeSinceLastEnrollmentBinned;
@property (retain, nonatomic) NSNumber *timeSinceLastEvent;
@property (retain, nonatomic) NSDate *previousEventDate;

- (id)valueForUndefinedKey:(id)a0;
- (void)updateStatus;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)dictionaryRepresentation;
- (void)incrementCountField:(id)a0;
- (void)persistData;
- (id)initWithName:(id)a0;
- (id)getEventDictionary;
- (void)updateBoundedFieldValue;
- (void)setNilValueForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)postEventExtendedBy:(id)a0;
- (BOOL)postEvent;
- (void)resetClass:(Class)a0;
- (id)initWithName:(id)a0 dictionary:(id)a1;
- (void)reset;
- (id)dictionaryRepresentationForClass:(Class)a0;
- (void)logAnalyticsDictionary:(id)a0;
- (id)initWithPersistedDataWithName:(id)a0;
- (id)dictionaryRepresentationArchiving:(BOOL)a0;
- (id)isPasscodeSet;

@end
