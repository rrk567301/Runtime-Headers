@class NSString, NSData;

@interface OTSerializedPlistEscrowRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSData *blob;
@property (copy, nonatomic) NSData *metadata;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)init:(id)a0 blob:(id)a1 metadata:(id)a2;

@end
