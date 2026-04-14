@class NSString;

@interface CADStatsStoreInfo : NSObject {
    long long storeType;
    long long syncStyle;
    NSString *accountType;
    BOOL _isDelegate;
    BOOL _isEnabled;
    NSString *_emailDomain;
    BOOL _emailIsUsedInOtherSource;
}

- (void).cxx_destruct;

@end
