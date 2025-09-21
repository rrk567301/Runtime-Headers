@class NSDictionary, NSMutableDictionary, NSArray;

@interface FigCaptureSourceBacking : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedPropertiesLock;
}

@property (readonly, nonatomic) unsigned int mediaType;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSMutableDictionary *cachedProperties;
@property (readonly, nonatomic) NSArray *formats;
@property (readonly, nonatomic) NSArray *missingFormatNames;
@property (readonly, nonatomic) NSArray *synchronizedStreamUniqueIDs;
@property (readonly, nonatomic) NSArray *unsynchronizedStreamUniqueIDs;

- (void)dealloc;
- (id)initWithMediaType:(unsigned int)a0 attributes:(id)a1 cachedProperties:(id)a2 formats:(id)a3 missingFormatNames:(id)a4 synchronizedStreamUniqueIDs:(id)a5 unsynchronizedStreamUniqueIDs:(id)a6;

@end
