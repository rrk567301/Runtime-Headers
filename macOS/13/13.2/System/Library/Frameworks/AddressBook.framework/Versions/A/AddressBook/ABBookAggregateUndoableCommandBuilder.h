@class NSString, NSMutableArray, ABAddressBook;

@interface ABBookAggregateUndoableCommandBuilder : NSObject <ABCommandVisitor> {
    NSString *_actionName;
    NSMutableArray *_undoableCommands;
}

@property (readonly) ABAddressBook *addressBook;
@property BOOL shouldSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)actionName;
- (id)build;
- (void)visitCommand:(id)a0;
- (void)visitUndoableCommand:(id)a0;
- (void)addCommand:(id)a0;
- (void)addCommands:(id)a0;
- (BOOL)containsSubCommands;
- (void)visitSaveRequestCommand:(id)a0;
- (void)visitSaveCNRequestCommand:(id)a0;
- (void)visitUndoableSaveCNRequestCommand:(id)a0;
- (id)initWithActionName:(id)a0;
- (id)initWithActionName:(id)a0 addressBook:(id)a1;
- (id)undoableCommands;
- (unsigned long long)countOfCommands;

@end
