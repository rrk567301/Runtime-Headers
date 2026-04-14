@interface _TtC20ContactsAutocompleteP33_CAEFE0EFD438E7DDA3F863704B47CA3F8StoreSpy : NSObject <CNAutocompleteFetchDelegate> {
    void /* unknown type, empty encoding */ results;
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ semaphore;
}

- (id)init;
- (void).cxx_destruct;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (void)autocompleteFetchDidFinish:(id)a0;

@end
