@class NSSet;

@interface TUMomentsCapabilities : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int availability;
@property (readonly, copy, nonatomic) NSSet *supportedMediaTypes;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithAvailability:(int)a0 supportedMediaTypes:(id)a1;
- (BOOL)isEqualToCapabilities:(id)a0;

@end
