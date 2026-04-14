@class NSString, NSDateInterval;

@interface ATXDisplayOnIntervalEvent : NSObject <ATXGenericEventBase>

@property (readonly, nonatomic) NSDateInterval *onInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithOnInterval:(id)a0;
- (BOOL)isEqualToATXDisplayOnIntervalEvent:(id)a0;
- (id)prettyRepresentation;

@end
