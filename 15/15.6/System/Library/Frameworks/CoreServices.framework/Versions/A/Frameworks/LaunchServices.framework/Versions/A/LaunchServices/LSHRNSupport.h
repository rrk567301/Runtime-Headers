@interface LSHRNSupport : NSObject

+ (void)invalidateCache;
+ (char)deviceConfiguredForHRN;
+ (void)setActivationRecordOverride:(char)a0;
+ (void)setActivationRecordOverrideNil;
+ (void)setFeatureFlagOverride:(char)a0;
+ (id)vendorIDFromVendorName:(id)a0 seedData:(id)a1 error:(id *)a2;

@end
