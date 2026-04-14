@class IFPackageController;

@interface IFMapScriptOnly : NSObject {
    IFPackageController *_packageController;
    int _scriptType;
}

+ (id)itemWithPackageController:(id)a0 scriptType:(int)a1;

- (void)dealloc;
- (int)scriptType;
- (id)packageController;
- (id)initWithPackageController:(id)a0 scriptType:(int)a1;

@end
