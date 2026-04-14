@class IFPkg;

@interface IFInstallationCheckRequirement : IFRequirement {
    IFPkg *_delegatePackage;
}

- (id)initWithPackage:(id)a0;
- (id)label;
- (BOOL)doesEvaluateSecurely;
- (BOOL)isTrueForTarget:(id)a0;

@end
