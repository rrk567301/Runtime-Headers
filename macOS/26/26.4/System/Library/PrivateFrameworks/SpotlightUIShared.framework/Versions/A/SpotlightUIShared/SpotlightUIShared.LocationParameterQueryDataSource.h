@interface SpotlightUIShared.LocationParameterQueryDataSource : NSObject <MKLocalSearchCompleterDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchCompleter;
    void /* unknown type, empty encoding */ currentQuery;
    void /* unknown type, empty encoding */ responseHandler;
}

- (void).cxx_destruct;
- (id)init;
- (void)completer:(id)a0 didFailWithError:(id)a1;
- (void)completerDidUpdateResults:(id)a0;

@end
