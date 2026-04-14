@class AVAudioFormat;
@protocol AuRA_Stream;

@interface AuRA_StreamHints : NSObject <NSCopying>

@property (retain, nonatomic) id<AuRA_Stream> stream;
@property (retain, nonatomic) AVAudioFormat *format;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
