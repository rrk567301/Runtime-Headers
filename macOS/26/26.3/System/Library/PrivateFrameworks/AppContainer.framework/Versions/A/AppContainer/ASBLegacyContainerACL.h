@class NSSet;

@interface ASBLegacyContainerACL : NSObject <NSFastEnumeration> {
    NSSet *_requirements;
}

+ (id)containerACLWithCodeRequirement:(id)a0;
+ (id)containerACLWithCodeRequirements:(id)a0;

- (unsigned long long)count;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)requirements;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (BOOL)allowsCode:(id)a0;
- (BOOL)allowsCode:(id)a0 error:(id *)a1;
- (BOOL)containsRequirement:(id)a0;
- (id)initWithCodeRequirementData:(id)a0;
- (id)initWithCodeRequirements:(id)a0;
- (id)requirementsData;

@end
