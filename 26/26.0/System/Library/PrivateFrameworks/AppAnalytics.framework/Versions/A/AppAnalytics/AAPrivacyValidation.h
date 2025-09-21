@class NSSet;

@interface AAPrivacyValidation : NSObject {
    void /* function */ denylistDescriptors;
}

@property (class, nonatomic, readonly) AAPrivacyValidation *default;

@property (nonatomic, readonly) BOOL enabled;
@property (nonatomic, readonly) NSSet *denylistDescriptors;

- (id)init;
- (void).cxx_destruct;
- (id)withDenylistDescriptors:(id)a0;
- (id)withEnabled:(BOOL)a0;

@end
