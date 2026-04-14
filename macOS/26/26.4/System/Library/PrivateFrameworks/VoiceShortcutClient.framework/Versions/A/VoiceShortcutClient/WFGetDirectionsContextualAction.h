@class NSString, CLLocation;

@interface WFGetDirectionsContextualAction : WFContextualAction

@property (readonly, nonatomic) CLLocation *destination;
@property (readonly, copy, nonatomic) NSString *destinationName;
@property (readonly, nonatomic) unsigned long long navigationType;

+ (BOOL)supportsSecureCoding;

- (id)uniqueIdentifier;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_staticDisplayStringForDecoding;
- (id)initWithDestination:(id)a0 name:(id)a1 type:(unsigned long long)a2;
- (id)readableTypeFromType:(unsigned long long)a0;
- (BOOL)showsUserInterfaceWhenRunning;

@end
