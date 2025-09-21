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
- (char)containsMediaObjectsWithMediaTypeMask:(unsigned long long)a0;
- (id)mediaObjectsAsync;
- (char)objectsFetched;
- (void)removeMediaObject:(id)a0;
- (void)setMediaObjectsArray:(id)a0;

@end
