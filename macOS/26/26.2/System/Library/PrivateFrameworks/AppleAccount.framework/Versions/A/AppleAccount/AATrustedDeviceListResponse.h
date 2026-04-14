@class NSArray, NSNumber;

@interface AATrustedDeviceListResponse : AAResponse

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSNumber *defaultNumberOfDevicesToShow;

+ (id)_privacySensitiveKeys;

- (id)privacySensitiveResponseBody;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
