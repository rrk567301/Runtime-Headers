@class NSNumber, NSString;

@interface STExceptionApp : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *requesterDSID;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long adamID;
@property (copy, nonatomic) NSString *distributorID;
@property (nonatomic) unsigned long long ratingValue;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequesterDSID:(id)a0 bundleIdentifier:(id)a1 adamID:(unsigned long long)a2 distributorID:(id)a3 ratingValue:(unsigned long long)a4;

@end
