@interface PFRestrictionsController : NSObject {
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ observation;
}

@property (class, nonatomic, readonly) PFRestrictionsController *shared;
@property (class, nonatomic, readonly) char isExplicitContentAllowed;

- (id)init;
- (void).cxx_destruct;
- (void)startListening;
- (void)stopListening;
- (void)reload;

@end
