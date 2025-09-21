@interface SNSetRestrictionsThunk : SASetRestrictions {
    void /* unknown type, empty encoding */ thunk;
}

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 context:(id)a1;
- (id)initWithThunk:(id /* block */)a0;
- (void)siriNetwork_invokeThunk;

@end
