@interface _TtCO8SwiftMLS23RCSFileAttachmentCrypto23SeekableDataInputStream : NSInputStream {
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ pos;
}

@property (nonatomic, readonly) BOOL hasBytesAvailable;

- (id)initWithData:(id)a0;
- (id)propertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)open;
- (BOOL)getBuffer:(char **)a0 length:(long long *)a1;
- (long long)read:(char *)a0 maxLength:(long long)a1;
- (id)initWithURL:(id)a0;
- (void)close;
- (void).cxx_destruct;

@end
