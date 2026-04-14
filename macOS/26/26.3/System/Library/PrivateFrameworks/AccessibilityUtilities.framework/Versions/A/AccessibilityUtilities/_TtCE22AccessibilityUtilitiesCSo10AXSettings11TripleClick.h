@class NSArray, NSDate;

@interface _TtCE22AccessibilityUtilitiesCSo10AXSettings11TripleClick : NSObject {
    void /* unknown type, empty encoding */ _$accessibilityHelpBannerFirstShownTimestamp_Storage;
    void /* unknown type, empty encoding */ _$lock_accessibilityHelpBannerFirstShownTimestamp;
    void /* unknown type, empty encoding */ _$accessibilityHelpBannerLastShownTimestamp_Storage;
    void /* unknown type, empty encoding */ _$lock_accessibilityHelpBannerLastShownTimestamp;
    void /* unknown type, empty encoding */ _$accessibilityHelpBannerTemporaryTripleClickOptions_Storage;
    void /* unknown type, empty encoding */ _$lock_accessibilityHelpBannerTemporaryTripleClickOptions;
    void /* unknown type, empty encoding */ encoder;
    void /* unknown type, empty encoding */ decoder;
    void /* unknown type, empty encoding */ store;
}

@property (nonatomic, copy) NSDate *accessibilityHelpBannerFirstShownTimestamp;
@property (nonatomic, copy) NSDate *accessibilityHelpBannerLastShownTimestamp;
@property (nonatomic, copy) NSArray *accessibilityHelpBannerTemporaryTripleClickOptions;

- (id)init;
- (void).cxx_destruct;

@end
