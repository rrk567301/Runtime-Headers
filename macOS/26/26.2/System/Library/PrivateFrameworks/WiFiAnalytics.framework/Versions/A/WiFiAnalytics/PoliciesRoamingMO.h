@class BSSMO, RoamMO;

@interface PoliciesRoamingMO : PoliciesMO

@property (retain, nonatomic) BSSMO *bss;
@property (retain, nonatomic) RoamMO *roam;

+ (id)fetchRequest;

- (BOOL)setBSSto:(id)a0 orBssid:(id)a1 onContainer:(id)a2 withError:(id *)a3;
- (BOOL)setRoamto:(id)a0 withError:(id *)a1;

@end
