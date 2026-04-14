@class NSArray, NSString;

@interface MechanismBaseComposite : MechanismBase <MechanismComposite>

@property (nonatomic) unsigned long long k;
@property (nonatomic) unsigned long long n;
@property (nonatomic, getter=isAND) BOOL AND;
@property (nonatomic, getter=isOR) BOOL OR;
@property (retain, nonatomic) NSArray *submechanisms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contextExternalizer;
- (void).cxx_destruct;
- (BOOL)canRecoverFromAvailabilityError:(id)a0 request:(id)a1;
- (id)initWithEventIdentifier:(long long)a0 remoteViewController:(long long)a1 k:(unsigned long long)a2 ofSubmechanisms:(id)a3 request:(id)a4;
- (BOOL)isAvailableForPurpose:(long long)a0 error:(id *)a1;

@end
