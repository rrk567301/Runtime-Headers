@class NSDictionary;

@interface ASTConnectionArchiveSelfServiceSession : ASTMaterializedConnection {
    NSDictionary *_rawBody;
}

- (void)setSessionId:(id)a0;
- (void).cxx_destruct;
- (id)endpoint;
- (id)rawBody;

@end
