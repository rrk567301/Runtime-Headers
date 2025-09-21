@class NSString;

@interface SAiCloudGetiCloudInformation : SADomainCommand

@property (copy, nonatomic) NSString *query;

+ (id)getiCloudInformation;
+ (id)getiCloudInformationWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
