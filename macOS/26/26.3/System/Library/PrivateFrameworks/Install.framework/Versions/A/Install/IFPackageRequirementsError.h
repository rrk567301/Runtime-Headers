@class NSString, IFPackageController;

@interface IFPackageRequirementsError : NSObject {
    IFPackageController *_packageController;
    id _reference;
    BOOL _shouldContinue;
    NSString *_errorTitle;
    NSString *_errorMessage;
}

- (id)reference;
- (id)description;
- (id)errorMessage;
- (BOOL)shouldContinue;
- (id)errorTitle;
- (id)packageController;

@end
