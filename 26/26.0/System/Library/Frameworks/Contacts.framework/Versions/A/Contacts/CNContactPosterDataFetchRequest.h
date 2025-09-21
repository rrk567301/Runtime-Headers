@class NSFetchRequest;

@interface CNContactPosterDataFetchRequest : CNContactPosterDataRequest

@property (readonly, nonatomic) NSFetchRequest *persistentStoreRequest;

@end
