@class NSString, NSDate;

@interface PKActivityEvent : NSObject

@property (readonly, nonatomic) NSString *eventType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic, getter=isUnread) char unread;

+ (id)eventsWithTransactions:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 date:(id)a1 unread:(char)a2;
- (char)isEqualToActivityEvent:(id)a0;

@end
