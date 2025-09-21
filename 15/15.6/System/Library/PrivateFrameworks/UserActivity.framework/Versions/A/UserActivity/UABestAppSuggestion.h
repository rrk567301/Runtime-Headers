@class NSString, NSUUID, NSDictionary, NSDate;

@interface UABestAppSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSString *userActivityTypeIdentifier;
@property (copy) NSUUID *uniqueIdentifier;
@property (copy) NSString *activityType;
@property (readonly) unsigned long long type;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *dynamicIdentifier;
@property (readonly, copy) NSDate *lastUpdateTime;
@property (readonly, copy) NSDate *lastActiveTime;
@property (readonly, copy) NSDate *when;
@property (readonly, copy) NSDictionary *options;
@property (readonly) double confidence;
@property (readonly, copy) NSString *originatingDeviceIdentifier;
@property (readonly, copy) NSString *originatingDeviceName;
@property (readonly, copy) NSString *originatingDeviceType;
@property (readonly) char isActive;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 uuid:(id)a1 activityType:(id)a2 dynamicIdentifier:(id)a3 lastUpdateTime:(id)a4 lastActiveTime:(id)a5 type:(unsigned long long)a6 deviceName:(id)a7 deviceIdentifier:(id)a8 deviceType:(id)a9 options:(id)a10 isActive:(char)a11;
- (id)userActivityTypeIdentifier;
- (id)when;

@end
