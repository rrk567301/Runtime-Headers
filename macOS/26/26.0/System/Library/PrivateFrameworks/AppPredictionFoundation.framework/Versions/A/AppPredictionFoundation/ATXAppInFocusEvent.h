@class NSString, NSDate;

@interface ATXAppInFocusEvent : NSObject <NSSecureCoding, ATXGenericEventBase>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSString *parentBundleID;
@property (readonly, nonatomic) NSString *extensionHostID;
@property (readonly, nonatomic) BOOL starting;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *launchReason;
@property (readonly, nonatomic) int displayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleId:(id)a0 type:(int)a1 displayType:(int)a2 parentBundleID:(id)a3 extensionHostID:(id)a4 starting:(BOOL)a5 absoluteTimestamp:(id)a6 launchReason:(id)a7;
- (id)initWithBundleId:(id)a0 type:(int)a1 parentBundleID:(id)a2 extensionHostID:(id)a3 starting:(BOOL)a4 absoluteTimestamp:(id)a5 launchReason:(id)a6;
- (BOOL)isEqualToATXAppInFocusEvent:(id)a0;

@end
