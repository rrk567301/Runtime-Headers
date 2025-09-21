@class NSMutableSet;

@interface AATrustedContactFetchRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableSet *includedStatuses;
@property (readonly, nonatomic) unsigned long long contactType;
@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) BOOL shouldLookUpContactInAddressBook;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)includeContactsWithStatus:(long long)a0;
- (id)initWithContactType:(unsigned long long)a0 cachePolicy:(unsigned long long)a1;

@end
