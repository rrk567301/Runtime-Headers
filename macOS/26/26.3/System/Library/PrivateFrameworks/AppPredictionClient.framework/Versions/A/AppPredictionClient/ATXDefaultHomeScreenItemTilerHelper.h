@class NSMutableSet;

@interface ATXDefaultHomeScreenItemTilerHelper : NSObject {
    NSMutableSet *_usedBundleIds;
    NSMutableSet *_usedSpecialKinds;
}

- (id)filterForNextUnusedWidgetDescriptor:(id)a0;
- (id)init;
- (void)unmarkWidgetAsUsed:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isSpecialAvocadoDescriptorKind:(id)a0;
- (BOOL)_isWidgetAlreadyUsed:(id)a0;
- (void)_markWidgetAsUsed:(id)a0;

@end
