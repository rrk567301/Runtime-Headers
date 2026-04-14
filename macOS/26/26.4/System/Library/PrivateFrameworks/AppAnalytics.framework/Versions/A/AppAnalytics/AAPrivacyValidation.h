@class NSSet;

@interface AAPrivacyValidation : NSObject {
    void /* function */ denylistDescriptors;
}

@property (class, nonatomic, readonly) AAPrivacyValidation *default;

@property (nonatomic, readonly) BOOL enabled;
@property (nonatomic, readonly) NSSet *denylistDescriptors;

- (void).cxx_destruct;
- (id)init;
- (id)withDenylistDescriptors:(id)a0;
- (id)withEnabled:(BOOL)a0;

@end
