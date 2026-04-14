@class NSString, EMGeneratedSummary;

@interface MSExternalGeneratedSummaryAction : MSExternalAction

@property (readonly) NSString *searchableItemIdentifier;
@property (readonly) EMGeneratedSummary *generatedSummary;

+ (id)entityName;

- (id)description;
- (id)initWithManagedObject:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSearchableItemIdentifier:(id)a0 generatedSummary:(id)a1;
- (id)managedObjectForContext:(id)a0;

@end
