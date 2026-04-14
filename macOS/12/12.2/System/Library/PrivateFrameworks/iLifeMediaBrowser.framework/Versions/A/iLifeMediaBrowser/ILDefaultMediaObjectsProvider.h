@class NSMutableArray;

@interface ILDefaultMediaObjectsProvider : NSObject <ILMediaObjectsProvider> {
    NSMutableArray *_mediaObjects;
}

- (void)dealloc;
- (id)init;
- (id)mediaObjects;
- (void)cancelEvaluation;
- (void)addMediaObjects:(id)a0;
- (id)mediaObjectsAsync;
- (void)setMediaObjectsArray:(id)a0;
- (unsigned long long)mediaObjectCount;
- (BOOL)containsMediaObjectsWithMediaTypeMask:(unsigned long long)a0;
- (void)removeMediaObject:(id)a0;
- (BOOL)objectsFetched;

@end
