@class NSString;

@interface POKerberosStatus : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *ticketKeyPath;
@property (retain) NSString *realm;
@property (retain) NSString *cacheName;
@property (retain) NSString *upn;
@property char importSuccessful;
@property char exchangeRequired;
@property char failedToConnect;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dataRepresentation;
- (id)dictionaryRepresentation;

@end
