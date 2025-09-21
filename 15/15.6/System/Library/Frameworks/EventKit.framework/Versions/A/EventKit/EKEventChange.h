@class EKObjectID;

@interface EKEventChange : EKCalendarItemChange

@property (readonly, nonatomic) char availabilityChanged;
@property (readonly, nonatomic) char privacyLevelChanged;
@property (readonly, nonatomic) char travelTimeChanged;
@property (readonly, nonatomic) char travelStartLocationChanged;
@property (readonly, nonatomic) char statusChanged;
@property (readonly, nonatomic) EKObjectID *originalItemID;

+ (int)entityType;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
