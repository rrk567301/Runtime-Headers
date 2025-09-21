@class NSDate;

@interface SMUpperBoundEta : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *mapsUpperBoundEta;
@property (readonly, nonatomic) NSDate *crowFliesUpperBoundEta;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMapsUpperBoundEta:(id)a0 crowFliesUpperBoundEta:(id)a1;

@end
