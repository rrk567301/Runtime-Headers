@class NSString;

@interface WFAskEachTimeVariable : WFVariable

@property (readonly, nonatomic) NSString *prompt;

- (id)name;
- (id)init;
- (id)icon;
- (BOOL)isAvailable;
- (id)initWithPrompt:(id)a0;
- (BOOL)supportsAggrandizements;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)requiresModernVariableSupport;

@end
