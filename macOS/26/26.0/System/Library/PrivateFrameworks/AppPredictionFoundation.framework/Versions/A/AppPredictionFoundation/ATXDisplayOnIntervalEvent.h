@class NSString, NSDateInterval;

@interface ATXDisplayOnIntervalEvent : NSObject <ATXGenericEventBase>

@property (readonly, nonatomic) NSDateInterval *onInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOnInterval:(id)a0;
- (BOOL)isEqualToATXDisplayOnIntervalEvent:(id)a0;
- (id)prettyRepresentation;

@end
