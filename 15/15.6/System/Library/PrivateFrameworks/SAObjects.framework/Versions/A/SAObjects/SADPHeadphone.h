@class NSString;

@interface SADPHeadphone : SADPDeviceDetail

@property (nonatomic) char inOrOverEar;
@property (copy, nonatomic) NSString *position;

+ (id)headphone;
+ (id)headphoneWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
