@interface AVSystemControllerCommon : NSObject {
    struct OpaqueFigSystemController { } *mFigController;
}

@property (weak) id selfWeak;

+ (void)initialize;
+ (void)postNotificationOnMainQueue:(id)a0 notification:(id)a1 object:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)releaseSharedInstance;
- (void)dealloc;
- (id)attributeForKey:(id)a0;
- (id)copyAttributeForKeyMappingToFig;
- (struct OpaqueFigSystemController { } *)copyFigController;
- (id)copySetAttributeForKeyMappingToFig;
- (void)initializeAttributeForKeyMappingToFig;
- (BOOL)setAttribute:(id)a0 forKey:(id)a1 error:(id *)a2;

@end
