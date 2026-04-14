@class NSString, PKShowStoreId;

@interface PKShow : NSObject <NSSecureCoding> {
    void /* function */ title;
    void /* function */ descriptionText;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ feedUrl;
    void /* unknown type, empty encoding */ podcastUuid;
    void /* unknown type, empty encoding */ artworkDictionary;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly) PKShowStoreId *storeId;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
