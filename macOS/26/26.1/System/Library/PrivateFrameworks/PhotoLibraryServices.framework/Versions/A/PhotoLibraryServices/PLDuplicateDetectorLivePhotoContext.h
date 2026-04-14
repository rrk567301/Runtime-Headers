@class NSMutableDictionary;

@interface PLDuplicateDetectorLivePhotoContext : NSObject {
    NSMutableDictionary *_container;
}

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)addStableHash:(id)a0 contextData:(id)a1;
- (BOOL)hasStableHash:(id)a0 contextData:(id)a1;

@end
