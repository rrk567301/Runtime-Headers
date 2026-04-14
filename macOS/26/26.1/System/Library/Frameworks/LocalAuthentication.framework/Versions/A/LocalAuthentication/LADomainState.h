@class LADomainStateBiometry, LADomainStateCompanion, NSData;

@interface LADomainState : NSObject {
    NSData *_stateHash;
}

@property (readonly, nonatomic) LADomainStateBiometry *biometry;
@property (readonly, nonatomic) LADomainStateCompanion *companion;
@property (readonly, nonatomic) NSData *stateHash;

- (id)initWithResult:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_resolveCombinedStateHash;

@end
