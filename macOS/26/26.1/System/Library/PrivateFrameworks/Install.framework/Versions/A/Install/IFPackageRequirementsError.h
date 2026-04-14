@class NSString, IFPackageController;

@interface IFPackageRequirementsError : NSObject {
    IFPackageController *_packageController;
    id _reference;
    BOOL _shouldContinue;
    NSString *_errorTitle;
    NSString *_errorMessage;
}

- (id)reference;
- (BOOL)shouldContinue;
- (id)description;
- (id)errorMessage;
- (id)errorTitle;
- (id)packageController;

@end
