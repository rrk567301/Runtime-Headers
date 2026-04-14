@class NSDictionary;

@interface HKUCUMUnitDisplayConverter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _synonymLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _hkTableLock;
}

@property (copy, nonatomic) NSDictionary *synonymLookupTable;
@property (copy, nonatomic) NSDictionary *hkUnitNameLookupTable;

+ (id)sharedConverter;

- (void).cxx_destruct;
- (id)init;
- (id)hkUnitNameForUCUMUnitCode:(id)a0;
- (id)synonymForUCUMUnitString:(id)a0;

@end
