@class NSString, PKPaymentPass;
@protocol NPKExpressGymKitAvailabilityManagerDelegate;

@interface NPKExpressGymKitAvailabilityManager : NSObject <NPKExpressGymKitConflictResolver> {
    int _notificationToken;
}

@property (readonly, nonatomic) BOOL isExpressGymKitAllowed;
@property (readonly, nonatomic) PKPaymentPass *conflictingPass;
@property (weak, nonatomic) id<NPKExpressGymKitAvailabilityManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
