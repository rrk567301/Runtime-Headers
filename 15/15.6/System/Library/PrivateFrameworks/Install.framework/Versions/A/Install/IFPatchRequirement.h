@class NSString, IFInstallPlan;

@interface IFPatchRequirement : IFRequirement {
    IFInstallPlan *_installPlan;
    NSString *_searchPrefix;
    NSString *_defaultDestinationPrefix;
}

- (void)dealloc;
- (id)message;
- (id)label;
- (id)title;
- (id)initWithPackage:(id)a0;
- (char)isWarning;
- (id)initWithInstallPlan:(id)a0 andSearchPrefix:(id)a1;
- (id)initWithInstallPlan:(id)a0 andSearchPrefix:(id)a1 andDefaultPathPrefix:(id)a2;
- (char)isTrueForTarget:(id)a0;

@end
