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

- (void)persistData;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)dictionaryRepresentation;
- (id)isPasscodeSet;
- (void)incrementCountField:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)initWithPersistedDataWithName:(id)a0;
- (id)dictionaryRepresentationArchiving:(BOOL)a0;
- (void)setNilValueForKey:(id)a0;
- (void)reset;
- (BOOL)postEventExtendedBy:(id)a0;
- (id)initWithName:(id)a0;
- (void)updateBoundedFieldValue;
- (void)updateStatus;
- (void).cxx_destruct;
- (void)resetClass:(Class)a0;
- (BOOL)postEvent;
- (id)getEventDictionary;
- (id)initWithName:(id)a0 dictionary:(id)a1;
- (void)logAnalyticsDictionary:(id)a0;
- (id)dictionaryRepresentationForClass:(Class)a0;

@end
