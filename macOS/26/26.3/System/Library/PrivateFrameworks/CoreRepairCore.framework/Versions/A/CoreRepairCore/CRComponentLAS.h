@class NSString;

@interface CRComponentLAS : CRComponentBase {
    NSString *identifierBase64;
}

+ (id)sharedSingleton;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)challengeComponentWith:(id)a0 withReply:(id /* block */)a1;
- (id)identifierBase64;
- (void)setIdentifierBase64:(id)a0;

@end
