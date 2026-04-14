@class NSString, PKFlight, NSData;

@interface PKFlightShareInvitation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *passUniqueIdentifier;
@property (readonly, nonatomic) PKFlight *flight;
@property (retain, nonatomic) NSData *placeholderImageData;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToFlightShareInvitation:(id)a0;
- (id)initWithFlight:(id)a0 passUniqueIdentifier:(id)a1;

@end
