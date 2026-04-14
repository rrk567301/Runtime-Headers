@class NSString, NSDate;

@interface ATXDisplayStateEvent : NSObject <ATXGenericEventBase>

@property (readonly, nonatomic) BOOL displayState;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDisplayState:(BOOL)a0 absoluteTimestamp:(id)a1;

@end
