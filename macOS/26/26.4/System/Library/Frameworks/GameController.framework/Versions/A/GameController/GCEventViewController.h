@interface GCEventViewController : NSObject {
    unsigned char padding[240];
    BOOL _controllerUserInteractionEnabledSetExternally;
    BOOL _internalControllerUserInteractionEnabled;
}

@property (nonatomic) BOOL controllerUserInteractionEnabled;

+ (void)initialize;

- (BOOL)controllerUserInteractionEnabledSetExternally;
- (BOOL)internalControllerUserInteractionEnabled;
- (void)setInternalControllerUserInteractionEnabled:(BOOL)a0;

@end
