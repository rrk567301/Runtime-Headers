@class NSMutableDictionary;
@protocol EMMessageContentCachedMetadataDelegate;

@interface EMMessageContentCachedMetadata : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _didLogCachedMetadataError;
    id<EMMessageContentCachedMetadataDelegate> _delegate;
    NSMutableDictionary *_localCache;
}

@property (nonatomic) char showRemoteImages;
@property (nonatomic) char skipMessageReformatting;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
