@class NSMutableDictionary, NSMutableArray;

@interface ABCNSaveResponse : NSObject {
    NSMutableDictionary *_updatedGroups;
    NSMutableArray *_successBlocks;
    NSMutableArray *_errors;
}

- (void)dealloc;
- (id)init;
- (id)updatedGroups;
- (id)errors;
- (void)executeSuccessBlocks;
- (id)userInfoRepresentation;

@end
