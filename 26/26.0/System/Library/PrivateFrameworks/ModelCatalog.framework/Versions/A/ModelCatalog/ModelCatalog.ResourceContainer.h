@class NSString;

@interface ModelCatalog.ResourceContainer : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ resourceData;
    void /* unknown type, empty encoding */ resourceType;
    void /* unknown type, empty encoding */ assetBacked;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
