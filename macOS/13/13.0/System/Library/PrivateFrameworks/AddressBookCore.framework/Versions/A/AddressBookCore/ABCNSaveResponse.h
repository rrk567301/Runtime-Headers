@class NSMutableDictionary, NSMutableArray;

@interface ABCNSaveResponse : NSObject {
    NSMutableDictionary *_updatedGroups;
    NSMutableArray *_successBlocks;
    NSMutableArray *_errors;
}

- (void)dealloc;
- (id)init;
- (id)errors;
- (id)updatedGroups;
- (id)userInfoRepresentation;
- (void)executeSuccessBlocks;

@end
