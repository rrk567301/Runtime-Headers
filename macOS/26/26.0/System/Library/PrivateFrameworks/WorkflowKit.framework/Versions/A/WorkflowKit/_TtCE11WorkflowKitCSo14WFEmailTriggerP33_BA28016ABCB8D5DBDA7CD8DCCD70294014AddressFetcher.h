@interface _TtCE11WorkflowKitCSo14WFEmailTriggerP33_BA28016ABCB8D5DBDA7CD8DCCD70294014AddressFetcher : NSObject <CNAutocompleteFetchDelegate> {
    void /* unknown type, empty encoding */ fetchRequest;
    void /* unknown type, empty encoding */ cancellable;
    void /* unknown type, empty encoding */ continuation;
    void /* unknown type, empty encoding */ defaultValue;
}

- (id)init;
- (void).cxx_destruct;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (void)autocompleteFetchDidFinish:(id)a0;

@end
