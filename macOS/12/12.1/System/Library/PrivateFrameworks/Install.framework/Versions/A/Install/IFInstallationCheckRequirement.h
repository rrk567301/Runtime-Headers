@class IFPkg;

@interface IFInstallationCheckRequirement : IFRequirement {
    IFPkg *_delegatePackage;
}

- (id)label;
- (id)initWithPackage:(id)a0;
- (BOOL)isTrueForTarget:(id)a0;
- (BOOL)doesEvaluateSecurely;

@end
