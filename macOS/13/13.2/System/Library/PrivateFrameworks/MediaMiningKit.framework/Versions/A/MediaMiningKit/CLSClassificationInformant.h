@interface CLSClassificationInformant : CLSInformant

+ (id)classIdentifier;
+ (id)familyIdentifier;
+ (id)informantDependenciesIdentifiers;

- (id)gatherCluesForInvestigation:(id)a0 progressBlock:(id /* block */)a1;
- (double)_confidenceForCount:(unsigned long long)a0 mu:(double)a1 sigma:(double)a2;

@end
