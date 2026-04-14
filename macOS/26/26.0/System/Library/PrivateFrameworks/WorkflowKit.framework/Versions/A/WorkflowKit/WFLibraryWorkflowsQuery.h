@class NSString;

@interface WFLibraryWorkflowsQuery : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ workflowQuery;
    void /* unknown type, empty encoding */ sortBy;
    void /* unknown type, empty encoding */ limit;
    void /* unknown type, empty encoding */ nameContaining;
    void /* unknown type, empty encoding */ nameEqualing;
    void /* unknown type, empty encoding */ hasAssociatedAppBundleIdentifier;
    void /* unknown type, empty encoding */ associatedAppBundleIdentifier;
    void /* unknown type, empty encoding */ isRecentlyModified;
    void /* unknown type, empty encoding */ isRecentlyRun;
}

@property (nonatomic, readonly) NSString *debugDescription;

+ (id)sortedWorkflowsWithQuery:(id)a0;
+ (id)sortedWorkflowsWithQuery:(id)a0 sortByName:(BOOL)a1 associatedAppBundleIdentifier:(id)a2;
+ (id)sortedWorkflowsWithQuery:(id)a0 sortByName:(BOOL)a1 hasAssociatedBundleIdentifier:(BOOL)a2;
+ (id)sortedWorkflowsWithQuery:(id)a0 sortByName:(BOOL)a1 limit:(long long)a2;
+ (id)sortedWorkflowsWithQuery:(id)a0 sortByName:(BOOL)a1 nameContaining:(id)a2 limit:(long long)a3;
+ (id)sortedWorkflowsWithQuery:(id)a0 sortByName:(BOOL)a1 nameEqualing:(id)a2;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)performReturningCountIn:(id)a0 database:(id)a1 error:(id *)a2;
- (id)performReturningShortcutsIn:(id)a0 database:(id)a1 error:(id *)a2;

@end
