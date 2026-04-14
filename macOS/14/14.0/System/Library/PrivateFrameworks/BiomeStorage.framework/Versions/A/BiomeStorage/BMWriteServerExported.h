@class BMAccessControlPolicy, NSMutableDictionary, BMProcess, NSString;

@interface BMWriteServerExported : NSObject <BMWriteServiceServer> {
    BMProcess *_process;
    BMAccessControlPolicy *_policy;
    NSMutableDictionary *_writerCache;
    NSString *_useCase;
}

- (void).cxx_destruct;
- (void)configureConnectionForUseCase:(id)a0 reply:(id /* block */)a1;
- (id)checkEntitlementsAndReturnWriterForStreamIdentifier:(id)a0 user:(unsigned int)a1 error:(id *)a2;
- (id)initWithProcess:(id)a0 accessControlPolicy:(id)a1;
- (void)writeData:(id)a0 version:(unsigned int)a1 timestamp:(double)a2 toStream:(id)a3 asUser:(unsigned int)a4 reply:(id /* block */)a5;

@end
