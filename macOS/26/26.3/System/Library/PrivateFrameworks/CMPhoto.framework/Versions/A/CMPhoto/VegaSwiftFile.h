@interface VegaSwiftFile : NSObject {
    void /* unknown type, empty encoding */ file;
}

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)dataSet;
- (id)init;
- (void).cxx_destruct;
- (id)writeAndReturnError:(id *)a0;
- (id)fileMeta;
- (id)initWithSopClassUID:(id)a0;
- (BOOL)setTransferSyntax:(id)a0 error:(id *)a1;

@end
