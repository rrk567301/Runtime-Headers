@class BSSMO, RoamMO;

@interface PoliciesRoamingMO : PoliciesMO

@property (retain, nonatomic) BSSMO *bss;
@property (retain, nonatomic) RoamMO *roam;

+ (id)fetchRequest;

@end
