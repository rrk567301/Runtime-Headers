@class FMFSchedule, NSString, FMFPlacemark, NSArray, CLLocation, NSDate;

@interface FMFFence : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSString *genericFriendName;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *displayLocationName;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *friendIdentifier;
@property (retain, nonatomic) NSString *createdByIdentifier;
@property (retain, nonatomic) NSString *pendingIdentifier;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) FMFPlacemark *placemark;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSArray *followerIds;
@property (retain, nonatomic) NSString *trigger;
@property (retain, nonatomic) NSString *type;
@property (nonatomic) unsigned long long locationType;
@property (nonatomic, getter=isActive) char active;
@property (nonatomic, getter=isRecurring) char recurring;
@property (nonatomic, getter=isFromMe) char fromMe;
@property (retain, nonatomic) FMFSchedule *schedule;
@property (retain, nonatomic) NSDate *muteEndDate;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSString *ckRecordName;
@property (retain, nonatomic) NSString *ckRecordZoneOwnerName;
@property (retain, nonatomic) NSString *acceptanceStatus;
@property (readonly, nonatomic, getter=isRegionAllowed) char regionAllowed;
@property (readonly, nonatomic, getter=isOnMe) char onMe;
@property (readonly, getter=isSupported) char supported;
@property (readonly, nonatomic, getter=shouldUseCloudKitStore) char useCloudKitStore;
@property (readonly, nonatomic, getter=shouldUseIDSTrigger) char useIDSTrigger;
@property (readonly, nonatomic, getter=isMuted) char isMuted;
@property (readonly, nonatomic, getter=inviteDate) NSDate *inviteDate;

+ (id)endDateForMuteTimespan:(unsigned long long)a0;
+ (char)isAllowedAtLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)handlesForArray:(id)a0;
- (id)initWithRecipient:(id)a0 location:(id)a1 placemark:(id)a2 label:(id)a3 trigger:(id)a4 type:(id)a5 locationType:(unsigned long long)a6 recurring:(char)a7;
- (id)localizedNotificationStringForFollower:(id)a0 locationName:(id)a1;
- (id)localizedRequestNotificationStringForFollower:(id)a0 locationName:(id)a1;
- (id)localizedSubtitleStringWithLocationName:(id)a0;
- (id)localizedWillBeNotifiedStringForFollower:(id)a0 locationName:(id)a1;
- (id)locationForDictionary:(id)a0;
- (void)updateFenceLocation:(id)a0 placemark:(id)a1 label:(id)a2 trigger:(id)a3 type:(id)a4 locationType:(unsigned long long)a5;
- (void)updateFenceMuteEndDate:(id)a0;

@end
