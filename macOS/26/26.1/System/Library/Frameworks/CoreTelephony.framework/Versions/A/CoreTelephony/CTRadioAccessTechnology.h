@class NSString, CTTelephonyNetworkInfo;

@interface CTRadioAccessTechnology : NSObject {
    CTTelephonyNetworkInfo *_networkInfo;
}

@property (readonly) NSString *radioAccessTechnology;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCTTelephonyNetworkInfo:(id)a0;

@end
