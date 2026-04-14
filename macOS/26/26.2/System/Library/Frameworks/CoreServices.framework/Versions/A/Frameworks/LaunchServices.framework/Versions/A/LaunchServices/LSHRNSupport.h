@interface LSHRNSupport : NSObject

+ (BOOL)deviceConfiguredForHRN;
+ (void)invalidateCache;
+ (void)setFeatureFlagOverride:(BOOL)a0;
+ (void)setActivationRecordOverride:(BOOL)a0;
+ (void)setActivationRecordOverrideNil;
+ (id)vendorIDFromVendorName:(id)a0 seedData:(id)a1 error:(id *)a2;

@end
