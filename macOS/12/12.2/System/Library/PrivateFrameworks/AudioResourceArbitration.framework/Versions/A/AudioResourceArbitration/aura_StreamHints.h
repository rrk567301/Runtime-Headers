@class AVAudioFormat;
@protocol AuRA_Stream;

@interface AuRA_StreamHints : NSObject <NSCopying>

@property (retain, nonatomic) id<AuRA_Stream> stream;
@property (retain, nonatomic) AVAudioFormat *format;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
