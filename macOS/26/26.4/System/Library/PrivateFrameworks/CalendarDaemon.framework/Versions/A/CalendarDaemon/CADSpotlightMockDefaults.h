@class NSString, NSMutableDictionary;

@interface CADSpotlightMockDefaults : NSObject <CADSpotlightDefaultsStorage> {
    NSMutableDictionary *_dict;
    BOOL _reindexStarted;
}

@property (nonatomic) BOOL successfullyReindexed;
@property (copy, nonatomic) id /* block */ setObjectCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;

@end
