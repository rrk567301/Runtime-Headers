@class NSString;

@interface ADMListenerRegistrationResults : NSObject {
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, readonly) BOOL successful;
@property (nonatomic, readonly) NSString *error;

- (void).cxx_destruct;
- (id)init;
- (long long)getListenerKey;

@end
