@class NSString;

@interface EKStaticAuthStatusChecker : NSObject <EKAuthStatusChecker>

@property (readonly, nonatomic) int eventAccessLevel;
@property (readonly, nonatomic) char hasAccessToReminders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearCachedAuthStatus;
- (id)initWithEventAccessLevel:(int)a0 hasAccessToReminders:(char)a1;

@end
