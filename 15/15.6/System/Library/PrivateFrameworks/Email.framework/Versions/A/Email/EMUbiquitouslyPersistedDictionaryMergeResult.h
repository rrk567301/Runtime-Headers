@class NSDictionary, NSArray;

@interface EMUbiquitouslyPersistedDictionaryMergeResult : NSObject

@property (readonly, nonatomic) NSDictionary *changedItems;
@property (readonly, nonatomic) NSArray *deletedItems;
@property (readonly, nonatomic) char requiresSynchronizing;

- (void).cxx_destruct;
- (id)initWithChangedItems:(id)a0 deletedItems:(id)a1 requiresSynchronizing:(char)a2;

@end
