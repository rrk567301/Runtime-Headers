@class NSDictionary, NSUUID;

@interface _HKObjectTypeAnchor : NSObject <NSSecureCoding> {
    NSUUID *_databaseIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *anchors;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAnchors:(id)a0 databaseIdentifier:(id)a1;

@end
