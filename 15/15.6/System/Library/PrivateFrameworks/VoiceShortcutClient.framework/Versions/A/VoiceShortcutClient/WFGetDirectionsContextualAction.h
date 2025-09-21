@class NSString, CLLocation;

@interface WFGetDirectionsContextualAction : WFContextualAction

@property (readonly, nonatomic) CLLocation *destination;
@property (readonly, copy, nonatomic) NSString *destinationName;
@property (readonly, nonatomic) unsigned long long navigationType;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (id)_staticDisplayStringForDecoding;
- (id)initWithDestination:(id)a0 name:(id)a1 type:(unsigned long long)a2;
- (id)readableTypeFromType:(unsigned long long)a0;
- (char)showsUserInterfaceWhenRunning;

@end
