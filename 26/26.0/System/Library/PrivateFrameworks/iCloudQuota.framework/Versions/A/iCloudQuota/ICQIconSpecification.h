@class NSString, ICQImageURL;

@interface ICQIconSpecification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *assetID;
@property (readonly, copy, nonatomic) NSString *sfSymbolId;
@property (readonly, copy, nonatomic) NSString *sfSymbolColor;
@property (readonly, nonatomic) ICQImageURL *imageURL;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
