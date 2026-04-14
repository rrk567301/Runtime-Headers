@class NSMutableDictionary;

@interface SKGEntityRanker : NSObject {
    NSMutableDictionary *_dates;
    NSMutableDictionary *_links;
    NSMutableDictionary *_locations;
    NSMutableDictionary *_keyphrases;
    NSMutableDictionary *_entities;
}

- (id)links;
- (id)locations;
- (void)addEntity:(id)a0;
- (void).cxx_destruct;
- (id)addresses;
- (id)keyphrases;
- (void)updateWithEntities:(id)a0;

@end
