@class NSString, UNCAtomicDataContentProtectionStrategy, UNCFileHandleContentProtectionStrategy;
@protocol UNCHybridContentProtectionStrategyDelegate;

@interface UNCHybridContentProtectionStrategy : NSObject <UNSContentProtectionStrategy> {
    id<UNCHybridContentProtectionStrategyDelegate> _delegate;
    NSString *_minimumProtection;
    char _needsMerge;
    UNCAtomicDataContentProtectionStrategy *_protectedContentAvailableStrategy;
    UNCFileHandleContentProtectionStrategy *_protectedContentUnavailableStrategy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)removeItemAtPath:(id)a0 error:(id *)a1;
- (char)isProtectedDataAvailable;
- (char)_mergeIsSupported;
- (id)_strategyForProtectionState;
- (id)dataAtPath:(id)a0;
- (char)dataIsAvailableAtPath:(id)a0;
- (void)importDataWithImportHandler:(id /* block */)a0;
- (id)initWithFileProtectionType:(id)a0 excludeFromBackup:(char)a1 delegate:(id)a2;
- (void)migrateDataAtPath:(id)a0 toPath:(id)a1;
- (char)writeData:(id)a0 atPath:(id)a1 error:(id *)a2;

@end
