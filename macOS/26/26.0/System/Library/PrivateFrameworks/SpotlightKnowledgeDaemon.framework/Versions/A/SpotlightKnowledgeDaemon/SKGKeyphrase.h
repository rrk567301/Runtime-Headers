@class NSString, NSArray, NSMutableSet;

@interface SKGKeyphrase : SKGEntity {
    NSMutableSet *_components;
    unsigned long long _tokenCount;
    unsigned long long _count;
}

@property (readonly, nonatomic) NSString *keyphrase;
@property (readonly, nonatomic) NSArray *components;
@property (readonly, nonatomic) unsigned long long tokenCount;
@property (nonatomic) unsigned long long count;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)addComponents:(id)a0;
- (void).cxx_destruct;
- (long long)compareByRank:(id)a0;
- (id)initWithKeyphrase:(id)a0 components:(id)a1 tokenCount:(unsigned long long)a2 score:(double)a3;

@end
