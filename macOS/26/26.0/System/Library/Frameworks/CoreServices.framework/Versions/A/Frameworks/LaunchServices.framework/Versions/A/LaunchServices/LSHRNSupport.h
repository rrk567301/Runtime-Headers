@interface LSHRNSupport : NSObject

+ (void)setFeatureFlagOverride:(BOOL)a0;
+ (BOOL)deviceConfiguredForHRN;
+ (id)vendorIDFromVendorName:(id)a0 seedData:(id)a1 error:(id *)a2;
+ (void)setActivationRecordOverride:(BOOL)a0;
+ (void)setActivationRecordOverrideNil;
+ (void)invalidateCache;

@end
