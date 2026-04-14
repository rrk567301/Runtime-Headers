@class NSMutableDictionary, NSMutableArray;

@interface ABCNSaveResponse : NSObject {
    NSMutableDictionary *_updatedGroups;
    NSMutableArray *_successBlocks;
    NSMutableArray *_errors;
}

- (void)dealloc;
- (id)updatedGroups;
- (id)init;
- (id)errors;
- (void)executeSuccessBlocks;
- (id)userInfoRepresentation;

@end
