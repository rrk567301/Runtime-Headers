@class NSArray, NSString;

@interface MechanismBaseComposite : MechanismBase <MechanismComposite>

@property (nonatomic) unsigned long long k;
@property (nonatomic) unsigned long long n;
@property (nonatomic, getter=isAND) char AND;
@property (nonatomic, getter=isOR) char OR;
@property (retain, nonatomic) NSArray *submechanisms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
