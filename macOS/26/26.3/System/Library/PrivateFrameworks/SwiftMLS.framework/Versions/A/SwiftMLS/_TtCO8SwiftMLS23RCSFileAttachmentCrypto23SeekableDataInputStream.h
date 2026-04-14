@interface _TtCO8SwiftMLS23RCSFileAttachmentCrypto23SeekableDataInputStream : NSInputStream {
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ pos;
}

@property (nonatomic, readonly) BOOL hasBytesAvailable;

- (long long)read:(char *)a0 maxLength:(long long)a1;
- (void)close;
- (id)initWithData:(id)a0;
- (BOOL)getBuffer:(char **)a0 length:(long long *)a1;
- (id)initWithURL:(id)a0;
- (void)open;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)propertyForKey:(id)a0;

@end
