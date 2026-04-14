@interface NSMenuFixedVisibleIndexDictionary : NSObject {
    void /* unknown type, empty encoding */ visibleIndexProvider;
    void /* unknown type, empty encoding */ menuIndexProvider;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithVisibleIndexProvider:(id /* block */)a0 menuIndexProvider:(id /* block */)a1;
- (long long)menuIndexForVisibleIndex:(long long)a0;
- (long long)visibleIndexForMenuIndex:(long long)a0;

@end
