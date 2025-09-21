@class NSString, PKFlight, NSData;

@interface PKFlightShareInvitation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *passUniqueIdentifier;
@property (readonly, nonatomic) PKFlight *flight;
@property (retain, nonatomic) NSData *placeholderImageData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToFlightShareInvitation:(id)a0;
- (id)initWithFlight:(id)a0 passUniqueIdentifier:(id)a1;

@end
