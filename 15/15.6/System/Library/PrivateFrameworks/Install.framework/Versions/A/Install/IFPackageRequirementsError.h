@class NSString, IFPackageController;

@interface IFPackageRequirementsError : NSObject {
    IFPackageController *_packageController;
    id _reference;
    char _shouldContinue;
    NSString *_errorTitle;
    NSString *_errorMessage;
}

- (id)description;
- (char)shouldContinue;
- (id)reference;
- (id)errorMessage;
- (id)errorTitle;
- (id)packageController;

@end
