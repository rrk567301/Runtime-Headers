@class NSData, NSString;

@interface IDSServerStorageFetchContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *serverStorageSSM;
@property (readonly, nonatomic) NSString *service;
@property (retain, nonatomic) NSString *reason;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithServerStorageSSM:(id)a0 service:(id)a1;

@end
