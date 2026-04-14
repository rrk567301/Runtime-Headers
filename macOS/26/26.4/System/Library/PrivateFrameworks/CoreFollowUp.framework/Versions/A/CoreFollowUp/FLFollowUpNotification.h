@class NSSet, NSString, NSDate, FLFollowUpAction;

@interface FLFollowUpNotification : NSObject <NSSecureCoding>

@property (class, readonly, copy) NSSet *defaultOptions;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long sqlID;
@property (retain, nonatomic) NSDate *previousNotificationActionDate;
@property (retain, nonatomic) FLFollowUpAction *dismissAction;
@property (retain, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *informativeText;
@property (copy, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) FLFollowUpAction *activateAction;
@property (retain, nonatomic) FLFollowUpAction *clearAction;
@property (copy, nonatomic) NSString *unlockActionLabel;
@property (nonatomic) double frequency;
@property (nonatomic) double firstNotificationDelay;
@property (copy, nonatomic) NSSet *options;
@property (nonatomic) BOOL forceDelivery;

- (BOOL)shouldDeliverNotification;
- (BOOL)_shouldDeliverNotificationWithStringOut:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_optionsData;
- (double)_creationDateAugmentedRepeatTimer;
- (id)init;
- (BOOL)shouldBackgroundDefaultAction;
- (void)recalculateActionDateToAccountForDelay;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)set_optionsData:(id)a0;
- (double)_frequencyDelta;

@end
