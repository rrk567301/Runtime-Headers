@class NSArray, WFWorkflowCollection;

@interface WFLibraryCollection : NSObject {
    void /* function */ shortcutIdentifiers;
}

@property (nonatomic, readonly) WFWorkflowCollection *workflowCollection;
@property (nonatomic, readonly) NSArray *shortcutIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (id)initWithWorkflowCollection:(id)a0 shortcutIdentifiers:(id)a1;

@end
