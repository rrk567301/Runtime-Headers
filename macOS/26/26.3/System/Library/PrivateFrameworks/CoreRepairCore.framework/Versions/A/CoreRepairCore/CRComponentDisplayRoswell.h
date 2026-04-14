@class NSString;

@interface CRComponentDisplayRoswell : CRComponentBase {
    NSString *identifierBase64;
}

+ (id)sharedSingleton;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)challengeComponentWith:(id)a0 withReply:(id /* block */)a1;
- (id)identifierBase64;
- (void)setIdentifierBase64:(id)a0;
- (void)signDisplayRoswellWith:(id)a0 withReply:(id /* block */)a1;

@end
