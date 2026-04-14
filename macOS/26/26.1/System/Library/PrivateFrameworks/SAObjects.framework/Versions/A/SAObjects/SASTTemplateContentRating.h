@class NSString;

@interface SASTTemplateContentRating : SASTTemplateRating

@property (copy, nonatomic) NSString *system;
@property (copy, nonatomic) NSString *value;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
