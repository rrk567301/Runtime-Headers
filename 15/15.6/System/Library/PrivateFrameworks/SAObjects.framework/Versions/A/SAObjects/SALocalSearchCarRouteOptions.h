@class NSString;

@interface SALocalSearchCarRouteOptions : AceObject <SAAceSerializable>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char avoidHighways;
@property (nonatomic) char avoidTolls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)carRouteOptions;
+ (id)carRouteOptionsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
