@class NSString;

@interface CADStatsStoreInfo : NSObject {
    long long storeType;
    long long syncStyle;
    NSString *accountType;
    char _isDelegate;
    char _isEnabled;
}

- (void).cxx_destruct;

@end
