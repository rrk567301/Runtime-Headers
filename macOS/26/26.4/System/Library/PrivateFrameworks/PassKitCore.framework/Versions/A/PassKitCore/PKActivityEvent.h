@class NSString, NSDate;

@interface PKActivityEvent : NSObject

@property (readonly, nonatomic) NSString *eventType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic, getter=isUnread) BOOL unread;

+ (id)eventsWithTransactions:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 date:(id)a1 unread:(BOOL)a2;
- (BOOL)isEqualToActivityEvent:(id)a0;

@end
