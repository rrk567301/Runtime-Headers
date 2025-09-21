@class NSString, NSArray, NSDate;

@interface ATXUsageInsightsNotificationEvent : NSObject <NSSecureCoding, ATXUsageInsightsGraphProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) NSDate *eventTime;
@property (readonly, copy, nonatomic) NSArray *contactIDs;
@property (readonly, nonatomic) char isGroupMessage;
@property (readonly, nonatomic) int deliveryType;
@property (readonly, copy, nonatomic) NSString *interruptedBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0 category:(unsigned long long)a1 eventTime:(id)a2 contactIDs:(id)a3 isGroupMessage:(char)a4 deliveryType:(int)a5;

@end
