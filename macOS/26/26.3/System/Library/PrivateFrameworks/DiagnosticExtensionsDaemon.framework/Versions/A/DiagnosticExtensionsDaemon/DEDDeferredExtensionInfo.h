@class NSString, NSDictionary, NSDate, DEDExtensionIdentifier;

@interface DEDDeferredExtensionInfo : NSObject <DEDSecureArchiving, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *bugSessionIdentifier;
@property (readonly) DEDExtensionIdentifier *dedIdentifier;
@property (retain, nonatomic) NSDate *triggerDate;
@property (nonatomic) BOOL requiresClassBDataAccess;
@property (nonatomic) double gracePeriod;
@property (retain) NSDictionary *parameters;
@property BOOL scheduled;
@property (readonly, nonatomic) NSString *activityString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)checkIn;
+ (id)log;
+ (id)activityStringForBugSessionIdentifier:(id)a0 dedIdentifier:(id)a1;
+ (id)allInfo;
+ (double)recommendedGracePeriodForDate:(id)a0;
+ (id)archivedClasses;

- (void)schedule;
- (void)run;
- (void)unschedule;
- (id)criteria;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isOverdue;
- (void)removeFromStore;
- (void)addToStore;
- (id)initWithBugSessionIdentifier:(id)a0 dedIdentifier:(id)a1 runOnDate:(id)a2 withGracePeriod:(double)a3;

@end
