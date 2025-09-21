@class NSString, CHSExtensionIdentity;

@interface WidgetKit.WidgetIdentifiable : NSObject <CHSWidgetIdentifiable> {
    void /* function */ kind;
}

@property (nonatomic, readonly) CHSExtensionIdentity *extensionIdentity;
@property (nonatomic, readonly) NSString *kind;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (BOOL)matches:(id)a0;
- (void).cxx_destruct;

@end
