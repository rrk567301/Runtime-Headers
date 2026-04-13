@class NSMutableDictionary, NSDictionary, NSData, NSArray;

@interface MISProfile : NSObject {
    BOOL _fixedup;
}

@property int flavor;
@property (copy) NSData *signature;
@property (retain) NSMutableDictionary *payload;
@property (copy) NSDictionary *entitlements;
@property (copy) NSArray *certs;

- (id)init;
- (void).cxx_destruct;
- (int)fixUp;

@end
