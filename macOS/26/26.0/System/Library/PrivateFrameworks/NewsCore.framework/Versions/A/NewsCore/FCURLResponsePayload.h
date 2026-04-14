@interface FCURLResponsePayload : NSObject {
    void /* unknown type, empty encoding */ kind;
    void /* unknown type, empty encoding */ _size;
}

@property (nonatomic, readonly) unsigned long long size;

- (id)initWithData:(id)a0;
- (id)init;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;

@end
