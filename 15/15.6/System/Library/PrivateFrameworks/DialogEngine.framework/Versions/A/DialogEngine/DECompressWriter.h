@class NSObject;
@protocol DEWriter;

@interface DECompressWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSObject<DEWriter> *writer;
@property (nonatomic) struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void /* function */ *zalloc; void /* function */ *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } stream;
@property (nonatomic) char streamInitialized;
@property (nonatomic) char streamEnded;
@property (nonatomic) char compressed;

+ (char)isCompressed:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)writeData:(id)a0;
- (id)initWithWriter:(id)a0;
- (id)compress:(id)a0 finalize:(char)a1;

@end
