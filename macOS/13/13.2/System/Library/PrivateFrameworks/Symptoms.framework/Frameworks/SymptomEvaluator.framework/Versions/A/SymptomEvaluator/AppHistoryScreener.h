@class NSMapTable;

@interface AppHistoryScreener : NSObject {
    NSMapTable *episodes;
}

+ (id)description;
+ (id)_sharedInstance;
+ (id)fetchEpisodeFor:(id)a0 inbound:(BOOL)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_makeLabelWith:(id)a0 inbound:(BOOL)a1 fullLabel:(id *)a2 exportLabel:(id *)a3;
- (id)_fetchEpisodeFor:(id)a0 inbound:(BOOL)a1;

@end
