@class NSString, NSNumber, NSDate;

@interface ATXAudioRouteEvent : NSObject <ATXGenericEventBase>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) NSString *portName;
@property (readonly, nonatomic) NSNumber *routeChangeReason;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) BOOL connected;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 connected:(BOOL)a2 identifier:(id)a3 portType:(id)a4 portName:(id)a5 routeChangeReason:(id)a6 type:(int)a7;
- (BOOL)isEqualToATXAudioRouteEvent:(id)a0;

@end
