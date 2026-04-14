@class NSMutableArray;

@interface ILDefaultMediaObjectsProvider : NSObject <ILMediaObjectsProvider> {
    NSMutableArray *_mediaObjects;
}

- (void)dealloc;
- (id)init;
- (id)mediaObjects;
- (unsigned long long)mediaObjectCount;
- (void)cancelEvaluation;
- (void)addMediaObjects:(id)a0;
- (id)mediaObjectsAsync;
- (BOOL)containsMediaObjectsWithMediaTypeMask:(unsigned long long)a0;
- (void)removeMediaObject:(id)a0;
- (void)setMediaObjectsArray:(id)a0;
- (BOOL)objectsFetched;

@end
