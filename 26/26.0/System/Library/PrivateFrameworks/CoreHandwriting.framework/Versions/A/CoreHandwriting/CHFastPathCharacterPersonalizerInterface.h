@interface CHFastPathCharacterPersonalizerInterface : NSObject {
    struct CHFastPathCharacterPersonalizerWithPrefixForStyleInventory { struct shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterPersonalizer> { struct CHAbstractFastPathCharacterPersonalizer *__ptr_; struct __shared_weak_count *__cntrl_; } _fastPathCharacterPersonalizer; } _fastPathCharacterPersonalizer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addToPersistentStorageCandidateWithId:(unsigned long long)a0;
- (id)createSynthesisRequestsForCharacter:(struct CHFastPathCharacterSynthesisRequest { id x0; id x1; int x2; id x3; unsigned int x4; int x5; unsigned long long x6; })a0 styleSamples:(id)a1;
- (void)enumerateCharactersToSynthesize:(BOOL)a0 withPersonalizationBlock:(id /* block */)a1;
- (void)enumeratePersonalizedCandidatesWithBlock:(id /* block */)a0;
- (id)initWithStyleInventory:(id)a0 characterSet:(id)a1;

@end
