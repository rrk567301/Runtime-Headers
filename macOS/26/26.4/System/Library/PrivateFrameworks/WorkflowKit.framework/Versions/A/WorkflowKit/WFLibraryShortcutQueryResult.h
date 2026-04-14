@class NSArray;

@interface WFLibraryShortcutQueryResult : NSObject {
    void /* function */ shortcutIdentifiers;
    void /* function */ relevantCollectionIdentifiers;
}

@property (nonatomic, readonly) NSArray *shortcutIdentifiers;
@property (nonatomic, readonly) NSArray *relevantCollectionIdentifiers;

- (void).cxx_destruct;
- (id)init;

@end
