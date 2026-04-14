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

- (void)setNilValueForKey:(id)a0;
- (void)updateStatus;
- (void)reset;
- (id)dictionaryRepresentationArchiving:(BOOL)a0;
- (id)getEventDictionary;
- (id)dictionaryRepresentationForClass:(Class)a0;
- (id)initWithName:(id)a0 dictionary:(id)a1;
- (id)isPasscodeSet;
- (BOOL)postEventExtendedBy:(id)a0;
- (BOOL)postEvent;
- (void)resetClass:(Class)a0;
- (id)dictionaryRepresentation;
- (void)incrementCountField:(id)a0;
- (void)persistData;
- (id)valueForUndefinedKey:(id)a0;
- (id)initWithPersistedDataWithName:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)initWithName:(id)a0;
- (void)logAnalyticsDictionary:(id)a0;
- (void)updateBoundedFieldValue;
- (void).cxx_destruct;

@end
