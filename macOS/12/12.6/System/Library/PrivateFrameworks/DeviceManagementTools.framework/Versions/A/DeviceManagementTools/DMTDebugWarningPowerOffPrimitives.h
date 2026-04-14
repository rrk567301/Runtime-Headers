@class NSString;
@protocol DMTPowerOffPrimitives;

@interface DMTDebugWarningPowerOffPrimitives : NSObject <DMTPowerOffPrimitives>

@property (readonly, nonatomic) id<DMTPowerOffPrimitives> underlyingPowerOffPrimitives;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reboot;
- (void)shutDown;
- (BOOL)warnAboutPowerOffIfNeeded:(BOOL)a0;
- (id)initWithUnderlyingPrimitives:(id)a0;

@end
