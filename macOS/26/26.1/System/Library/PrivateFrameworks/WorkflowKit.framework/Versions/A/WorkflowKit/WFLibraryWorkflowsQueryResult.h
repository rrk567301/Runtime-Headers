@class NSArray, WFDatabaseResultState;

@interface WFLibraryWorkflowsQueryResult : NSObject {
    void /* function */ descriptors;
}

@property (nonatomic, readonly) NSArray *descriptors;
@property (nonatomic, readonly) WFDatabaseResultState *state;

- (void).cxx_destruct;
- (id)init;

@end
