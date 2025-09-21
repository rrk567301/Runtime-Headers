@class NSManagedObjectContext;

@interface CNCDUnifiedContactInfoHelper : NSObject

@property (readonly, nonatomic) NSManagedObjectContext *context;

- (id)initWithManagedObjectContext:(id)a0;
- (void).cxx_destruct;
- (id)infosForContactIdentifiers:(id)a0;
- (id)infosForUnifiedContactIdentifiers:(id)a0;
- (id)insertNewInfoForContactWithIdentifier:(id)a0;
- (id)insertNewInfoForUnifiedContactWithIdentifier:(id)a0;

@end
