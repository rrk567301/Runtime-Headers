@class NSData, BRCChecksummingOutputStream;

@interface BRCPackageChecksummer : NSObject {
    BRCChecksummingOutputStream *_stream;
}

@property (readonly, nonatomic) NSData *signature;

- (id)init;
- (void).cxx_destruct;
- (void)done;
- (char)addItem:(id)a0 error:(id *)a1;

@end
