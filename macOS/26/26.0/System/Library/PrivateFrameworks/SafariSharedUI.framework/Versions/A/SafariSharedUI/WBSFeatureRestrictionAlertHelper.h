@interface WBSFeatureRestrictionAlertHelper : NSObject {
    void /* unknown type, empty encoding */ fallbackAlertMessage;
    void /* unknown type, empty encoding */ screenTimeSettingsURLString;
}

- (id)init;
- (void).cxx_destruct;
- (void)displayHistoryClearingDenialAlert;
- (void)displayPrivateBrowsingDenialAlert;

@end
