@class LACSExtractablePassword;

@interface LAExtractablePassword : NSObject {
    LACSExtractablePassword *_password;
}

- (void).cxx_destruct;
- (id)extractPassword:(id *)a0;
- (void)extractPasswordWithCompletion:(id /* block */)a0;
- (void)stashPassword:(id)a0 completion:(id /* block */)a1;
- (BOOL)stashPassword:(id)a0 error:(id *)a1;

@end
