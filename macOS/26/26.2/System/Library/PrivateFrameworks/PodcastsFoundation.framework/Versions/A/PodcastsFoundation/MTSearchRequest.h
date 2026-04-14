@interface MTSearchRequest : MTBaseMAPIRequest <MTMAPIRequest> {
    void /* unknown type, empty encoding */ contentTypes;
    void /* unknown type, empty encoding */ limit;
    void /* unknown type, empty encoding */ term;
}

- (void)setLimit:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)performWithCompletion:(id /* block */)a0;
- (id)initWithTerm:(id)a0 contentTypes:(id)a1;

@end
