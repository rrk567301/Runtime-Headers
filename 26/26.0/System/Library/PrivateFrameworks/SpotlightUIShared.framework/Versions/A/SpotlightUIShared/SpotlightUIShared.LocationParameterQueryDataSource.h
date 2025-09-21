@interface SpotlightUIShared.LocationParameterQueryDataSource : NSObject <MKLocalSearchCompleterDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchCompleter;
    void /* unknown type, empty encoding */ currentQuery;
    void /* unknown type, empty encoding */ responseHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)completer:(id)a0 didFailWithError:(id)a1;
- (void)completerDidUpdateResults:(id)a0;

@end
