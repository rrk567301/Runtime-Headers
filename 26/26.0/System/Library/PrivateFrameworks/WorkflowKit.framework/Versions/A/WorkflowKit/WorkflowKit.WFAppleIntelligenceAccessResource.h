@class NSString, WFImage, NSError;
@protocol WFUserInterfaceHost;

@interface WorkflowKit.WFAppleIntelligenceAccessResource : WFAccessResource

@property (class, nonatomic, readonly) BOOL systemResource;

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) WFImage *icon;
@property (nonatomic, readonly) unsigned long long status;

- (id)initWithDefinition:(id)a0;
- (id)init;
- (void)attemptRecoveryFromError:(NSError *)a0 optionIndex:(long long)a1 userInterface:(id<WFUserInterfaceHost>)a2 completionHandler:(void (^)(BOOL, NSError *))a3;
- (id)localizedErrorReasonForStatus:(unsigned long long)a0;
- (id)localizedErrorRecoveryOptionsForStatus:(unsigned long long)a0;
- (void)makeAvailableWithUserInterface:(id<WFUserInterfaceHost>)a0 completionHandler:(void (^)(BOOL, NSError *))a1;
- (id)initWithDefinition:(id)a0 enableDistributedNotifications:(BOOL)a1;

@end
