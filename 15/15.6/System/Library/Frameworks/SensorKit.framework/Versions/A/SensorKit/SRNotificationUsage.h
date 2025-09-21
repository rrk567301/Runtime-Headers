@class NSString;

@interface SRNotificationUsage : NSObject <SRSampleExporting, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *bundleIdentifier;
@property long long event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)notificationUsageWithBundleIdentifier:(id)a0 eventType:(long long)a1;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)sr_dictionaryRepresentation;

@end
