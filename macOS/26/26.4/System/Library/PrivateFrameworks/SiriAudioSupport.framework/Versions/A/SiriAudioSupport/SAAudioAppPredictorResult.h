@class NSString, NSArray;

@interface SAAudioAppPredictorResult : NSObject {
    void /* function */ requestId;
    void /* function */ selectedBundleIdentifier;
    void /* function */ disambiguateBundleIdentifiers;
    void /* unknown type, empty encoding */ resolutionType;
}

@property (nonatomic, readonly) NSString *requestId;
@property (nonatomic, readonly) NSString *selectedBundleIdentifier;
@property (nonatomic, readonly) NSArray *disambiguateBundleIdentifiers;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRequestId:(id)a0 selectedBundleIdentifier:(id)a1 disambiguateBundleIdentifiers:(id)a2;

@end
