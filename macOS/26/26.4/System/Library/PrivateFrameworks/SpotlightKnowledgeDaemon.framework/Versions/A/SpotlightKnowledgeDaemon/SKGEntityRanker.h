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
- (void).cxx_destruct;
- (void)addEntity:(id)a0;
- (id)addresses;
- (id)keyphrases;
- (void)updateWithEntities:(id)a0;

@end
