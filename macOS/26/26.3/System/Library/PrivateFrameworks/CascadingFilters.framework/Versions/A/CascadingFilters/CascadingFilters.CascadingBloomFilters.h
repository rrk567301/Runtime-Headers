@interface CascadingFilters.CascadingBloomFilters : NSObject {
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ hashAlgorithm;
    void /* unknown type, empty encoding */ numberOfLayers;
    void /* unknown type, empty encoding */ invertedLogic;
    void /* unknown type, empty encoding */ salt;
    void /* unknown type, empty encoding */ filters;
}

- (id)init;
- (void).cxx_destruct;

@end
