@class NSString;

@interface WFAskEachTimeVariable : WFVariable

@property (readonly, nonatomic) NSString *prompt;

- (id)init;
- (id)name;
- (id)icon;
- (BOOL)isAvailable;
- (id)initWithPrompt:(id)a0;
- (BOOL)supportsAggrandizements;
- (BOOL)requiresModernVariableSupport;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;

@end
