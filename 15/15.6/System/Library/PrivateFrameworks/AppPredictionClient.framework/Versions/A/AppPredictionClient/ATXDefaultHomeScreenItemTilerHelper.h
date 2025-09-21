@class NSMutableSet;

@interface ATXDefaultHomeScreenItemTilerHelper : NSObject {
    NSMutableSet *_usedBundleIds;
    NSMutableSet *_usedSpecialKinds;
}

- (id)init;
- (void).cxx_destruct;
- (char)_isSpecialAvocadoDescriptorKind:(id)a0;
- (char)_isWidgetAlreadyUsed:(id)a0;
- (void)_markWidgetAsUsed:(id)a0;
- (id)filterForNextUnusedWidgetDescriptor:(id)a0;
- (void)unmarkWidgetAsUsed:(id)a0;

@end
