@class NSString, CHSExtensionIdentity;

@interface WidgetKit.WidgetIdentifiable : NSObject <CHSWidgetIdentifiable> {
    void /* function */ kind;
}

@property (nonatomic, readonly) CHSExtensionIdentity *extensionIdentity;
@property (nonatomic, readonly) NSString *kind;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (BOOL)matches:(id)a0;
- (id)init;

@end
