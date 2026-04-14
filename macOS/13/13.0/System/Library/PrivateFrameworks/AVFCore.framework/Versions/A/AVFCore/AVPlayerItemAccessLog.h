@class NSArray, AVPlayerItemAccessLogInternal;

@interface AVPlayerItemAccessLog : NSObject <NSCopying> {
    AVPlayerItemAccessLogInternal *_playerItemAccessLog;
}

@property (readonly, nonatomic) unsigned long long extendedLogDataStringEncoding;
@property (readonly, nonatomic) NSArray *events;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_common_init;
- (id)initWithLogArray:(id)a0;
- (id)extendedLogData;
- (id)_accessLogArray;

@end
