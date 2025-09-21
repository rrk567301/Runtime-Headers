@class NSString;
@protocol DMTPowerOffPrimitives;

@interface DMTDebugWarningPowerOffPrimitives : NSObject <DMTPowerOffPrimitives>

@property (readonly, nonatomic) id<DMTPowerOffPrimitives> underlyingPowerOffPrimitives;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shutDown;
- (void)reboot;
- (void).cxx_destruct;
- (id)initWithUnderlyingPrimitives:(id)a0;
- (BOOL)warnAboutPowerOffIfNeeded:(BOOL)a0;

@end
