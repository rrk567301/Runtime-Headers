@class NSDate;

@interface SMUpperBoundEta : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *mapsUpperBoundEta;
@property (readonly, nonatomic) NSDate *crowFliesUpperBoundEta;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithMapsUpperBoundEta:(id)a0 crowFliesUpperBoundEta:(id)a1;

@end
