@class NSArray, NSString;

@interface APSearchAdFilterResult : NSObject {
    void /* unknown type, empty encoding */ result;
}

@property (nonatomic, readonly) BOOL areAllAdsDiscarded;
@property (nonatomic, readonly) NSArray *eligibleAds;
@property (nonatomic, readonly) long long discardReason;
@property (nonatomic, readonly) NSString *discardReasonDescription;

- (void).cxx_destruct;
- (id)init;

@end
