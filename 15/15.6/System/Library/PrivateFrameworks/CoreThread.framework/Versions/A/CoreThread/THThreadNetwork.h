@class NSString, NSData;

@interface THThreadNetwork : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *networkName;
@property (readonly, nonatomic) NSData *extendedPANID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 extendedPANID:(id)a1;

@end
