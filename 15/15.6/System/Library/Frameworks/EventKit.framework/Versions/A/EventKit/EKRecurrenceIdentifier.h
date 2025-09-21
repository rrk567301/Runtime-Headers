@class NSString, NSDate;

@interface EKRecurrenceIdentifier : NSObject <NSCopying>

@property (retain) NSString *localUID;
@property (retain) NSDate *recurrenceDate;
@property (retain, nonatomic) NSString *identifierString;

+ (id)recurrenceIdentifierWithString:(id)a0;
+ (const char *)_dateFormatStripTime:(char)a0 stripTimeZone:(char)a1;
+ (id)_recurrenceIdentifierWithRecurrenceDate:(id)a0 localUID:(id)a1 stripTime:(char)a2 stripTimeZone:(char)a3;
+ (id)_recurrenceStringForDate:(id)a0 stripTime:(char)a1 stripTimeZone:(char)a2;
+ (char)_splitIdentifier:(id)a0 intoLocalUID:(id *)a1 recurrenceDate:(id *)a2;
+ (id)localUIDForIdentifierString:(id)a0;
+ (id)recurrenceIdentifierWithLocalUID:(id)a0 recurrenceDate:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
