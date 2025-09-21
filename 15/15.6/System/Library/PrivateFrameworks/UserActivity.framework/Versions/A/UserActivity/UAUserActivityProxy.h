@class NSUUID, NSUserActivity, NSString, UABestAppSuggestion;

@interface UAUserActivityProxy : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSUUID *uuid;
@property (retain) NSUserActivity *internalActivity;
@property (retain) UABestAppSuggestion *suggestedActivity;
@property (readonly) NSString *activityType;
@property (readonly) NSString *dynamicActivityType;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) char isRemoteActivity;

- (id)description;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)contentAttributeSet;
- (void)accessActivity:(id /* block */)a0;
- (id)activityIfAvailible;
- (id)activitySubTitle;
- (id)activityTitle;
- (id)initWithActivity:(id)a0 bundleId:(id)a1;
- (id)initWithSuggestion:(id)a0;
- (id)initWithUUID:(id)a0 activityType:(id)a1 bundleID:(id)a2;
- (id)initWithUUID:(id)a0 activityType:(id)a1 dynamicActivityType:(id)a2 bundleID:(id)a3;
- (void)launchActivityWithOptions:(id)a0 completionHandler:(id /* block */)a1;

@end
