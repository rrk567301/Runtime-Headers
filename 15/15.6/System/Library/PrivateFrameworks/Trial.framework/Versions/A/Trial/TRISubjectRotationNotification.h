@interface TRISubjectRotationNotification : NSObject

+ (void)deregisterUpdateWithToken:(id)a0;
+ (char)notifySubjectRotation;
+ (id)registerSubjectRotationWithQueue:(id)a0 usingBlock:(id /* block */)a1;

@end
