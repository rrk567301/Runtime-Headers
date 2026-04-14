@class NSString;

@interface PKTransactionReleasedDataApplication : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long client;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *usageDescription;

- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToReleasedDataApplication:(id)a0;

@end
