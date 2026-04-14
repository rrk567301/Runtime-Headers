@class NSArray, WFDatabaseResultState;

@interface WFLibraryCollectionsQueryResult : NSObject {
    void /* function */ descriptors;
}

@property (nonatomic, readonly) NSArray *descriptors;
@property (nonatomic, readonly) WFDatabaseResultState *state;

- (id)init;
- (void).cxx_destruct;

@end
