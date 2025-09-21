@interface PFRestrictionsController : NSObject {
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ observation;
}

@property (class, nonatomic, readonly) PFRestrictionsController *shared;
@property (class, nonatomic, readonly) BOOL isExplicitContentAllowed;

- (void)stopListening;
- (void)startListening;
- (void)reload;
- (id)init;
- (void).cxx_destruct;

@end
