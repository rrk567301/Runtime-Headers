@class NSString;

@interface PKTransactionReleasedDataApplication : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long client;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *usageDescription;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToReleasedDataApplication:(id)a0;

@end
