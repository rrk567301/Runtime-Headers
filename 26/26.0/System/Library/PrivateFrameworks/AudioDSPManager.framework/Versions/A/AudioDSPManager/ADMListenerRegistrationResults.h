@class NSString;

@interface ADMListenerRegistrationResults : NSObject {
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, readonly) BOOL successful;
@property (nonatomic, readonly) NSString *error;

- (id)init;
- (void).cxx_destruct;
- (long long)getListenerKey;

@end
