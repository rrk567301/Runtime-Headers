@class NSString, IFPackageController;

@interface IFPackageRequirementsError : NSObject {
    IFPackageController *_packageController;
    id _reference;
    BOOL _shouldContinue;
    NSString *_errorTitle;
    NSString *_errorMessage;
}

- (BOOL)shouldContinue;
- (id)errorMessage;
- (id)reference;
- (id)description;
- (id)errorTitle;
- (id)packageController;

@end
