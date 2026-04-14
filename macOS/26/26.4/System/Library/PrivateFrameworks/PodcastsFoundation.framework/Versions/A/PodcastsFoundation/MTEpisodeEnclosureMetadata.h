@class NSString;

@interface MTEpisodeEnclosureMetadata : NSObject {
    void /* function */ priceTypeRawValue;
    void /* function */ assetUrl;
    void /* unknown type, empty encoding */ mediaKindsString;
}

@property (nonatomic, readonly) NSString *priceTypeRawValue;
@property (nonatomic, readonly) NSString *assetUrl;
@property (nonatomic, readonly) double durationInMilliseconds;
@property (nonatomic, readonly) BOOL hasDuration;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPriceType:(id)a0 assetUrl:(id)a1 durationInMilliseconds:(double)a2 mediaKinds:(id)a3;

@end
