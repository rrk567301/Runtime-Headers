@class NSSet;

@interface ASBContainerACL : NSObject <NSFastEnumeration> {
    NSSet *_requirements;
}

+ (id)containerACLWithCodeRequirements:(id)a0;
+ (id)containerACLWithCodeRequirement:(id)a0;

- (id)init;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)requirements;
- (id)initWithCodeRequirementData:(id)a0;
- (id)initWithCodeRequirements:(id)a0;
- (id)containerACLByAddingCodeRequirement:(id)a0;
- (id)containerACLByRemovingCodeRequirement:(id)a0;
- (id)requirementsData;
- (BOOL)allowsCode:(id)a0;
- (BOOL)containsRequirement:(id)a0;

@end
