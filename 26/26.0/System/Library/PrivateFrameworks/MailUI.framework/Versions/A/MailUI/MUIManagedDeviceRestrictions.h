@interface MUIManagedDeviceRestrictions : NSObject

@property (class, readonly, nonatomic) BOOL isManualSummaryRestricted;
@property (class, readonly, nonatomic) BOOL isSmartReplyRestricted;

+ (BOOL)_isFeatureRestricted:(struct __CFString { } *)a0;

@end
