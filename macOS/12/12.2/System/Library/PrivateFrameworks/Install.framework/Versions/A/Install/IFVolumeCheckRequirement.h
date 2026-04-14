@class IFPkg;

@interface IFVolumeCheckRequirement : IFRequirement {
    IFPkg *_delegatePackage;
}

- (id)label;
- (id)initWithPackage:(id)a0;
- (BOOL)isTrueForTarget:(id)a0;
- (BOOL)doesEvaluateSecurely;

@end
