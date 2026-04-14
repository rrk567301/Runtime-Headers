@class NSMutableDictionary;

@interface _CRKCardSectionViewControllerRegistry : NSObject {
    NSMutableDictionary *_cardSectionViewControllerClassNameForCardSectionClassName;
}

- (void).cxx_destruct;
- (id)init;
- (Class)cardSectionViewControllerClassForCardSectionClass:(Class)a0;
- (void)registerCardSectionViewControllerClass:(Class)a0 forCardSectionClass:(Class)a1;

@end
