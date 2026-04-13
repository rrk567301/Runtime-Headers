@class NSDate;

@interface _PFActionLogEvent : NSObject

@property (readonly) Class actionClass;
@property (readonly) unsigned long long actionId;
@property (readonly) NSDate *eventDate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAction:(id)a0;
- (id)initWithActionClass:(Class)a0 actionId:(unsigned long long)a1;
- (id)initWithEventLog:(id)a0;

@end
