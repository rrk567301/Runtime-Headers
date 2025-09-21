@class NSString, CALNNotificationContent, NSDate;

@interface CALNMutableNotificationRecord : CALNNotificationRecord <NSCopying>

@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) NSString *sourceClientIdentifier;
@property (copy, nonatomic) CALNNotificationContent *content;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) char shouldPresentAlert;
@property (nonatomic) char shouldPlaySound;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setContent:(id)a0;
- (void)setDate:(id)a0;
- (void)setSourceIdentifier:(id)a0;
- (void)setShouldPlaySound:(char)a0;
- (void)setShouldPresentAlert:(char)a0;
- (void)setSourceClientIdentifier:(id)a0;

@end
