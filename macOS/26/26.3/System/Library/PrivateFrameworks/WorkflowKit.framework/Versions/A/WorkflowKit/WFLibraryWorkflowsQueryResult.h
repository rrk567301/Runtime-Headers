@class NSArray, WFDatabaseResultState;

@interface WFLibraryWorkflowsQueryResult : NSObject {
    void /* function */ descriptors;
}

@property (nonatomic, readonly) NSArray *descriptors;
@property (nonatomic, readonly) WFDatabaseResultState *state;

- (id)init;
- (void).cxx_destruct;

@end
