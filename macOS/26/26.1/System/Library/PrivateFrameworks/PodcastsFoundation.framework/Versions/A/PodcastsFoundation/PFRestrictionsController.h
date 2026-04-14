@interface PFRestrictionsController : NSObject {
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ observation;
}

@property (class, nonatomic, readonly) PFRestrictionsController *shared;
@property (class, nonatomic, readonly) BOOL isExplicitContentAllowed;

- (void)stopListening;
- (void)reload;
- (void)startListening;
- (void).cxx_destruct;
- (id)init;

@end
