@interface _TtCC28GenerativeExperiencesRuntime26AvailabilityInternalServer6Server : NSObject <GenerativeModels.AvailabilityInternalXPCProtocol>

- (id)init;
- (void)updateAllWithUpdateReason:(id)a0 with:(id /* block */)a1;
- (void)cloudAvailabilityWith:(id /* block */)a0;
- (void)removeAllWith:(id /* block */)a0;
- (void)setOverriddenValues:(id)a0 with:(id /* block */)a1;
- (void)siriAssetStatusWith:(id /* block */)a0;
- (void)updateCacheWithDisabledUseCases:(id)a0 with:(id /* block */)a1;

@end
