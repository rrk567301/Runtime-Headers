@class NSDate;

@interface UNCNotificationSchedule : NSObject

@property (retain, nonatomic) NSDate *previousTriggerDate;

- (id)dictionaryRepresentation;
- (id)description;
- (id)_dateFormatter;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
