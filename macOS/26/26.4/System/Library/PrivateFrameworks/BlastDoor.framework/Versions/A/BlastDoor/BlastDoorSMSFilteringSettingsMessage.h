@class NSString;

@interface BlastDoorSMSFilteringSettingsMessage : NSObject {
    void /* unknown type, empty encoding */ sMSFilteringSettingsMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *filterExtensionName;
@property (nonatomic, readonly) unsigned long long smsFilterCapabilitiesOptions;

- (void).cxx_destruct;
- (id)init;

@end
