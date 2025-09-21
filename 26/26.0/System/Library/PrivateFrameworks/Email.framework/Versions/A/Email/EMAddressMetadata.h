@class NSArray, NSDate;

@interface EMAddressMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *capabilities;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) BOOL supportsEncryptedSubject;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCapabilities:(id)a0 date:(id)a1;

@end
