@class NSString, NSDate;

@interface ATXCarPlayConnectedEvent : NSObject <ATXGenericEventBase>

@property (readonly, nonatomic) BOOL connected;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 connected:(BOOL)a2;
- (BOOL)isEqualToATXCarPlayConnectedEvent:(id)a0;

@end
