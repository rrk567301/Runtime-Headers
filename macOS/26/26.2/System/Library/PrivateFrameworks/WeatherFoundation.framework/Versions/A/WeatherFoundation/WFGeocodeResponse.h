@class WFLocation;

@interface WFGeocodeResponse : WFResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) WFLocation *location;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)a0 location:(id)a1;

@end
