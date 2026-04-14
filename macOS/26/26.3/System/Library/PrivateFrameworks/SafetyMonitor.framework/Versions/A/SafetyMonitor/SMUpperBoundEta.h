@class NSDate;

@interface SMUpperBoundEta : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *mapsUpperBoundEta;
@property (readonly, nonatomic) NSDate *crowFliesUpperBoundEta;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMapsUpperBoundEta:(id)a0 crowFliesUpperBoundEta:(id)a1;

@end
