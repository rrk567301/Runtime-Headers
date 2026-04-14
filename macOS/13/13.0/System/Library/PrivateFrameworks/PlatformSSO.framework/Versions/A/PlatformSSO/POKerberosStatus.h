@class NSString;

@interface POKerberosStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *ticketKeyPath;
@property (retain) NSString *realm;
@property (retain) NSString *cacheName;
@property (retain) NSString *upn;
@property BOOL importSuccessful;
@property BOOL exchangeRequired;

- (id)description;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dataRepresentation;
- (id)dictionaryRepresentation;

@end
