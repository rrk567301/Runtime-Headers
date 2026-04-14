@class NSString, IFInstallPlan;

@interface IFPatchRequirement : IFRequirement {
    IFInstallPlan *_installPlan;
    NSString *_searchPrefix;
    NSString *_defaultDestinationPrefix;
}

- (id)title;
- (id)initWithPackage:(id)a0;
- (id)label;
- (id)message;
- (void)dealloc;
- (BOOL)isWarning;
- (id)initWithInstallPlan:(id)a0 andSearchPrefix:(id)a1;
- (id)initWithInstallPlan:(id)a0 andSearchPrefix:(id)a1 andDefaultPathPrefix:(id)a2;
- (BOOL)isTrueForTarget:(id)a0;

@end
