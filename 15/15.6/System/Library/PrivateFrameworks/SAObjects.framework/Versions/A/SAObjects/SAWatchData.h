@class NSString;

@interface SAWatchData : AceObject <SAAceSerializable>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char configuredForLeftWrist;
@property (copy, nonatomic) NSString *interfaceOrientation;
@property (nonatomic) char victoryDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)watchData;
+ (id)watchDataWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
