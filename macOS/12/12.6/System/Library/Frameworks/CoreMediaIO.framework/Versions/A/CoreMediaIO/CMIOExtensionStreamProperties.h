@class NSNumber, NSDictionary, NSMutableDictionary;

@interface CMIOExtensionStreamProperties : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_propertiesDictionary;
}

@property (retain) NSNumber *activeFormatIndex;
@property (retain) NSDictionary *frameDuration;
@property (retain) NSDictionary *maxFrameDuration;
@property (retain) NSNumber *sinkBufferQueueSize;
@property (retain) NSNumber *sinkBuffersRequiredForStartup;
@property (retain) NSNumber *sinkBufferUnderrunCount;
@property (retain) NSNumber *sinkEndOfData;
@property (copy) NSDictionary *propertiesDictionary;

+ (id)streamPropertiesWithDictionary:(id)a0;

- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (void)setPropertyState:(id)a0 forProperty:(id)a1;
- (id)initWithPropertyValues:(id)a0;

@end
