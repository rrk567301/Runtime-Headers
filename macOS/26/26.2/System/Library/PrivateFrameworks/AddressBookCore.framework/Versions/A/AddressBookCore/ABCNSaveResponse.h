@class NSMutableDictionary, NSMutableArray;

@interface ABCNSaveResponse : NSObject {
    NSMutableDictionary *_updatedGroups;
    NSMutableArray *_successBlocks;
    NSMutableArray *_errors;
}

- (id)init;
- (id)updatedGroups;
- (void)dealloc;
- (id)errors;
- (void)executeSuccessBlocks;
- (id)userInfoRepresentation;

@end
