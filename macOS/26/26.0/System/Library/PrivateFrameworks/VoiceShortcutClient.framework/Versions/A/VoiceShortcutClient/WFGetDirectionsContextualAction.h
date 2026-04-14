@class NSString, CLLocation;

@interface WFGetDirectionsContextualAction : WFContextualAction

@property (readonly, nonatomic) CLLocation *destination;
@property (readonly, copy, nonatomic) NSString *destinationName;
@property (readonly, nonatomic) unsigned long long navigationType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_staticDisplayStringForDecoding;
- (id)initWithDestination:(id)a0 name:(id)a1 type:(unsigned long long)a2;
- (id)readableTypeFromType:(unsigned long long)a0;
- (BOOL)showsUserInterfaceWhenRunning;

@end
