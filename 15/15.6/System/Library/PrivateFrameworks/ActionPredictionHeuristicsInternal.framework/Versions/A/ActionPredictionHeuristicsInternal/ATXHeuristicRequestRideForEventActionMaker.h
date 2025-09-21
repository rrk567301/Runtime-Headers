@class NSString, CLLocation, ATXHeuristicObjectHandle;

@interface ATXHeuristicRequestRideForEventActionMaker : ATXHeuristicActionMaker {
    CLLocation *_pickupLocation;
    ATXHeuristicObjectHandle *_dropoffEvent;
    NSString *_preferredAppBundleID;
}

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_makeAction;
- (id)actionTypeName;
- (id)dropOffLocationFromEKEvent:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 pickupLocation:(id)a2 dropoffEvent:(id)a3 preferredAppBundleID:(id)a4;
- (char)shouldPredictDropOffLocationGivenPickupLocation:(id)a0 andDropOffLocation:(id)a1;

@end
