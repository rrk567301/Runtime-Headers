@class NSString, NSMutableArray;

@interface TGTextGenerationOutputStream : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy) NSMutableArray *textFragments;
@property double score;
@property (readonly, copy) NSString *text;
@property (readonly, copy) NSString *mostRecentTextUpdate;

- (id)init;
- (void)addOutput:(id)a0;
- (void).cxx_destruct;

@end
