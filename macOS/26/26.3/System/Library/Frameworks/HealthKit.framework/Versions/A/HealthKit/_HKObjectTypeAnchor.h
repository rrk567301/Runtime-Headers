@class NSDictionary, NSUUID;

@interface _HKObjectTypeAnchor : NSObject <NSSecureCoding> {
    NSUUID *_databaseIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *anchors;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAnchors:(id)a0 databaseIdentifier:(id)a1;

@end
