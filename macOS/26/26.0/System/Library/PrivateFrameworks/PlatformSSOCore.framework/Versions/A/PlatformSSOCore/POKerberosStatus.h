@class NSString;

@interface POKerberosStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *ticketKeyPath;
@property (retain) NSString *realm;
@property (retain) NSString *cacheName;
@property (retain) NSString *upn;
@property BOOL importSuccessful;
@property BOOL exchangeRequired;
@property BOOL failedToConnect;

- (id)dataRepresentation;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
