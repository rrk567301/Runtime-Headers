@class IFPkg;

@interface IFInstallationCheckRequirement : IFRequirement {
    IFPkg *_delegatePackage;
}

- (id)label;
- (id)initWithPackage:(id)a0;
- (char)doesEvaluateSecurely;
- (char)isTrueForTarget:(id)a0;

@end
