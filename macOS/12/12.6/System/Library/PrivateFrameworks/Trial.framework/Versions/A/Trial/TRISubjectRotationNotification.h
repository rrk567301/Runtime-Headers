@interface TRISubjectRotationNotification : NSObject

+ (id)registerSubjectRotationWithQueue:(id)a0 usingBlock:(id /* block */)a1;
+ (void)deregisterUpdateWithToken:(id)a0;
+ (BOOL)notifySubjectRotation;

@end
