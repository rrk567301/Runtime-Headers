@class NSDictionary;

@interface WLKSiriBestPlayablesResponse : NSObject

@property (copy, nonatomic) NSDictionary *playablesByID;
@property (readonly, copy, nonatomic) NSDictionary *dictionary;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)playableForStatsID:(id)a0;

@end
