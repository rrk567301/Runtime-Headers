@class NSString;

@interface WFModelContentLocation : WFContentLocation

@property (class, nonatomic, readonly) NSString *prefix;
@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *localizedTitle;

+ (id)objectWithWFSerializedRepresentation:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 promptingBehaviour:(unsigned long long)a1;

@end
