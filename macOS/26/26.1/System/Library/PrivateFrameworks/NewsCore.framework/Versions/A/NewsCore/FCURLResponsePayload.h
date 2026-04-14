@interface FCURLResponsePayload : NSObject {
    void /* unknown type, empty encoding */ kind;
    void /* unknown type, empty encoding */ _size;
}

@property (nonatomic, readonly) unsigned long long size;

- (id)initWithFileURL:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
