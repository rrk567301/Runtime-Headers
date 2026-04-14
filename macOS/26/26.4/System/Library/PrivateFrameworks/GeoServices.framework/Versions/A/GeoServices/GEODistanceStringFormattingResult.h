@class NSString, NSMeasurement;

@interface GEODistanceStringFormattingResult : NSObject {
    void /* function */ string;
    void /* unknown type, empty encoding */ roundedDistance;
}

@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSMeasurement *roundedDistance;

- (void).cxx_destruct;
- (id)init;
- (id)initWithString:(id)a0 roundedDistance:(id)a1;

@end
