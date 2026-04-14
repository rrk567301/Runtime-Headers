@interface HMDBulletinNotificationRegistrationUtilities : HMFObject

+ (id)cameraSignificantEventRegistrationFromMKFRegistration:(id)a0;
+ (id)cameraSignificantEventRegistrationFromLocalRegistration:(id)a0;
+ (id)cameraReachabilityRegistrationFromMKFRegistration:(id)a0;
+ (id)cameraAccessModeRegistrationFromMKFRegistration:(id)a0;
+ (id)createAndAddLocalConditionsToRegistration:(id)a0 moc:(id)a1 conditions:(id)a2;
+ (id)createAndAddLocalPresenceConditionToRegistration:(id)a0 moc:(id)a1 condition:(id)a2;
+ (id)createAndAddLocalTimePeriodConditionToRegistration:(id)a0 moc:(id)a1 condition:(id)a2;
+ (id)createLocalElementFromTimeOfDay:(id)a0 moc:(id)a1;
+ (id)createLocalElementFromSunriseSunset:(id)a0 moc:(id)a1;
+ (id)conditionsFromLocalConditions:(id)a0;
+ (id)conditionsFromMKFConditions:(id)a0;
+ (id)accessoryRegistrationFromLocalRegistration:(id)a0;
+ (id)cameraReachabilityRegistrationFromLocalRegistration:(id)a0;
+ (id)cameraAccessModeRegistrationFromLocalRegistration:(id)a0;
+ (id)accessoryRegistrationFromMKFRegistration:(id)a0;

@end
