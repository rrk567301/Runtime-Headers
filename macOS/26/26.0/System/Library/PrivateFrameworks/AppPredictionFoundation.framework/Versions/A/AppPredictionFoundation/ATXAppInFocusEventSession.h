@class NSString, NSDate;

@interface ATXAppInFocusEventSession : NSObject <NSSecureCoding, ATXGenericEventBase>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSString *parentBundleID;
@property (readonly, nonatomic) NSString *extensionHostID;
@property (readonly, nonatomic) NSDate *appSessionStartTime;
@property (readonly, nonatomic) NSDate *appSessionEndTime;
@property (readonly, nonatomic) NSString *launchReason;
@property (readonly, nonatomic) double appSessionDuration;
@property (readonly, nonatomic) int displayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleId:(id)a0 type:(int)a1 displayType:(int)a2 parentBundleID:(id)a3 extensionHostID:(id)a4 appSessionStartTime:(id)a5 appSessionEndTime:(id)a6 launchReason:(id)a7;
- (id)initWithBundleId:(id)a0 type:(int)a1 parentBundleID:(id)a2 extensionHostID:(id)a3 appSessionStartTime:(id)a4 appSessionEndTime:(id)a5 launchReason:(id)a6;
- (BOOL)isEqualToATXAppInFocusEventSession:(id)a0;

@end
