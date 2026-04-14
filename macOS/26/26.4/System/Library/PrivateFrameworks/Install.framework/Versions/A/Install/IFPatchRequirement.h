@class NSString, IFInstallPlan;

@interface IFPatchRequirement : IFRequirement {
    IFInstallPlan *_installPlan;
    NSString *_searchPrefix;
    NSString *_defaultDestinationPrefix;
}

- (id)initWithPackage:(id)a0;
- (id)label;
- (id)title;
- (void)dealloc;
- (id)message;
- (BOOL)isWarning;
- (id)initWithInstallPlan:(id)a0 andSearchPrefix:(id)a1;
- (id)initWithInstallPlan:(id)a0 andSearchPrefix:(id)a1 andDefaultPathPrefix:(id)a2;
- (BOOL)isTrueForTarget:(id)a0;

@end
