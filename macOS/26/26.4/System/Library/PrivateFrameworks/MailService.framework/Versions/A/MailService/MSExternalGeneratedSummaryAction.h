@class NSString, EMGeneratedSummary;

@interface MSExternalGeneratedSummaryAction : MSExternalAction

@property (readonly) NSString *searchableItemIdentifier;
@property (readonly) EMGeneratedSummary *generatedSummary;

+ (id)entityName;

- (id)initWithManagedObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithSearchableItemIdentifier:(id)a0 generatedSummary:(id)a1;
- (id)managedObjectForContext:(id)a0;

@end
