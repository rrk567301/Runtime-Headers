@interface LSHRNSupport : NSObject

+ (id)vendorIDFromVendorName:(id)a0 seedData:(id)a1 error:(id *)a2;
+ (void)setActivationRecordOverride:(BOOL)a0;
+ (void)setFeatureFlagOverride:(BOOL)a0;
+ (void)invalidateCache;
+ (BOOL)deviceConfiguredForHRN;
+ (void)setActivationRecordOverrideNil;

@end
