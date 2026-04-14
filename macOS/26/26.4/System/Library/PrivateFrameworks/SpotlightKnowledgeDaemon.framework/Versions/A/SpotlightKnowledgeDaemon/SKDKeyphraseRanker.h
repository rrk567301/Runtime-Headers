@class NSMutableDictionary;

@interface SKDKeyphraseRanker : NSObject {
    unsigned long long _maxCount;
    NSMutableDictionary *_keyphrases;
}

@property (readonly, nonatomic) unsigned long long totalCount;

- (id)initWithMaxCount:(long long)a0;
- (void).cxx_destruct;
- (void)addKeyphrase:(id)a0;
- (void)enumerateRankedKeyphrasesUsingBlock:(id /* block */)a0;

@end
