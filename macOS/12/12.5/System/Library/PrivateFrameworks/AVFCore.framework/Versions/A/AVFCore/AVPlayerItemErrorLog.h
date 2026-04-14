@class NSArray, AVPlayerItemErrorLogInternal;

@interface AVPlayerItemErrorLog : NSObject <NSCopying> {
    AVPlayerItemErrorLogInternal *_playerItemErrorLog;
}

@property (readonly, nonatomic) unsigned long long extendedLogDataStringEncoding;
@property (readonly, nonatomic) NSArray *events;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithLogArray:(id)a0;
- (id)_common_init;
- (id)extendedLogData;
- (id)_errorLogArray;

@end
