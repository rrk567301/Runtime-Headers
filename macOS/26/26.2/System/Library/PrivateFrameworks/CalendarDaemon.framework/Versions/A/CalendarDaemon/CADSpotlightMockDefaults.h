@class NSString, NSMutableDictionary;

@interface CADSpotlightMockDefaults : NSObject <CADSpotlightDefaults> {
    NSMutableDictionary *_dict;
    BOOL _reindexStarted;
}

@property (nonatomic) BOOL successfullyReindexed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;

@end
