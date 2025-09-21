@class NSMutableArray;

@interface TIContactCollection : NSObject {
    NSMutableArray *_contacts;
}

@property (readonly, nonatomic) char sourceHasRelevancyScore;
@property (readonly, nonatomic) long long count;

- (void).cxx_destruct;
- (void)addContact:(id)a0;
- (void)enumerateContactsUsingBlock:(id /* block */)a0;
- (id)initWithRelevanceScoreType:(char)a0;

@end
