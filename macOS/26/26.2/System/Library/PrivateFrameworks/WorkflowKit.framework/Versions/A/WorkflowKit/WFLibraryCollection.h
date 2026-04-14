@class NSArray, WFWorkflowCollection;

@interface WFLibraryCollection : NSObject {
    void /* function */ shortcutIdentifiers;
}

@property (nonatomic, readonly) WFWorkflowCollection *workflowCollection;
@property (nonatomic, readonly) NSArray *shortcutIdentifiers;

- (void).cxx_destruct;
- (id)init;
- (id)initWithWorkflowCollection:(id)a0 shortcutIdentifiers:(id)a1;

@end
