@class AVAudioFormat;
@protocol AuRA_Stream;

@interface AuRA_StreamHints : NSObject <NSCopying>

@property (retain, nonatomic) id<AuRA_Stream> stream;
@property (retain, nonatomic) AVAudioFormat *format;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
