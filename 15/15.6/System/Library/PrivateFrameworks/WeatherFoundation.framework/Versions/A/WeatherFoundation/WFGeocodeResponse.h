@class WFLocation;

@interface WFGeocodeResponse : WFResponse <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) WFLocation *location;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 location:(id)a1;

@end
