@interface SiriInformationSearch.SearchToolGlobalRequestXPC : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ pommesSearchRequest;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ clientEntities;
    void /* unknown type, empty encoding */ searchToolClientId;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
