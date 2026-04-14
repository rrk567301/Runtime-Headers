@class NSDate;

@interface UNCNotificationSchedule : NSObject

@property (retain, nonatomic) NSDate *previousTriggerDate;

- (id)_dateFormatter;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;

@end
