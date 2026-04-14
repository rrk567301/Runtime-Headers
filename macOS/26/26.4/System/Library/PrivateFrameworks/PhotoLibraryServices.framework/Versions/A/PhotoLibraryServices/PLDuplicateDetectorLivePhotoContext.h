@class NSMutableDictionary;

@interface PLDuplicateDetectorLivePhotoContext : NSObject {
    NSMutableDictionary *_container;
}

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)addStableHash:(id)a0 contextData:(id)a1;
- (BOOL)hasStableHash:(id)a0 contextData:(id)a1;

@end
