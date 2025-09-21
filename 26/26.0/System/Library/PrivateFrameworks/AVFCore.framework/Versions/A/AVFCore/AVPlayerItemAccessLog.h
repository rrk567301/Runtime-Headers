@class NSArray, AVPlayerItemAccessLogInternal;

@interface AVPlayerItemAccessLog : NSObject <NSCopying> {
    AVPlayerItemAccessLogInternal *_playerItemAccessLog;
}

@property (readonly, nonatomic) unsigned long long extendedLogDataStringEncoding;
@property (readonly, nonatomic) NSArray *events;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (id)_accessLogArray;
- (id)extendedLogData;
- (id)_common_init;
- (id)accessLogArray;
- (id)initWithLogArray:(id)a0;

@end
