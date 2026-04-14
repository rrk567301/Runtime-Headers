@class NSDate;

@interface UNCNotificationSchedule : NSObject

@property (retain, nonatomic) NSDate *previousTriggerDate;

- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)_dateFormatter;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;

@end
