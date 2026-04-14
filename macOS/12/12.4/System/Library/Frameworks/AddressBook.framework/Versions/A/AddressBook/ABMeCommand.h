@class ABGroup, NSData, ABPerson;

@interface ABMeCommand : ABCommand {
    ABGroup *_selectedGroup;
    ABPerson *_currentMe;
    ABPerson *_newMe;
    NSData *_currentMeImageData;
    NSData *_newMeImageData;
}

- (void).cxx_destruct;
- (void)undoIt;
- (void)redoIt;
- (BOOL)doIt;
- (id)initWithGroup:(id)a0 newMe:(id)a1 addressBook:(id)a2;

@end
