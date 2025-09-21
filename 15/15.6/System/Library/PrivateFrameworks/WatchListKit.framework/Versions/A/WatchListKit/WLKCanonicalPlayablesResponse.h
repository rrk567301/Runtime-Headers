@class NSDictionary, NSString, NSArray;

@interface WLKCanonicalPlayablesResponse : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSString *canonicalID;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, nonatomic, getter=isWatchListable) char watchListable;
@property (readonly, nonatomic, getter=isWatchListed) char watchListed;
@property (readonly, nonatomic) NSArray *playables;

+ (id)_parseChannelsFromPayload:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithSiriResponse:(id)a0 statsID:(id)a1;

@end
