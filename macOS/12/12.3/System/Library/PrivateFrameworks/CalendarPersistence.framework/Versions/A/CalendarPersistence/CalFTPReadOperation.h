@class NSMutableData, NSData;

@interface CalFTPReadOperation : CalFTPOperation {
    struct __CFReadStream { } *_readStream;
}

@property (retain, nonatomic) NSMutableData *mutableData;
@property (nonatomic) unsigned long long resourceSize;
@property (nonatomic) BOOL resourceSizeIsKnown;
@property (nonatomic) BOOL resourceSizeChecked;
@property (readonly, retain, nonatomic) NSData *data;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)initWithURL:(id)a0 user:(id)a1 password:(id)a2;
- (void)setProperties;
- (void)tearDownStream;
- (void)readStream:(struct __CFReadStream { } *)a0 receivedEventWithType:(unsigned long long)a1;

@end
