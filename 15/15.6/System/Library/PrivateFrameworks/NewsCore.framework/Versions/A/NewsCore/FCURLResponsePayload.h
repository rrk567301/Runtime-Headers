@interface FCURLResponsePayload : NSObject {
    void /* unknown type, empty encoding */ kind;
    void /* unknown type, empty encoding */ _size;
}

@property (nonatomic, readonly) unsigned long long size;

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithFileURL:(id)a0;

@end
