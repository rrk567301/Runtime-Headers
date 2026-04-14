@interface SASetRestrictionsThunk : SASetRestrictions {
    id /* block */ _thunk;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)siriCore_invokeThunk;
- (id)initWithThunk:(id /* block */)a0;

@end
