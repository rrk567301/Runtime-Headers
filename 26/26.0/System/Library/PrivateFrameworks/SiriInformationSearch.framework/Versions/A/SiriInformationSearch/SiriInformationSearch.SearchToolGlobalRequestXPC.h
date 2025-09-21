@interface SiriInformationSearch.SearchToolGlobalRequestXPC : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ pommesSearchRequest;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ clientEntities;
    void /* unknown type, empty encoding */ searchToolClientId;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
