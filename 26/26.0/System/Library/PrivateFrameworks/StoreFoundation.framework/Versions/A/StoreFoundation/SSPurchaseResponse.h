@class NSArray, NSDictionary;

@interface SSPurchaseResponse : NSObject <NSSecureCoding> {
    NSDictionary *_rawResponse;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *downloads;
@property (retain) NSDictionary *metrics;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_newDownloadsFromItems:(id)a0 withDSID:(id)a1;
- (id)initWithDictionary:(id)a0 userIdentifier:(id)a1;

@end
