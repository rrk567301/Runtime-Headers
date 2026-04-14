@class NSString;

@interface AKSimpleProfileImageResponseImageMetadata : AKDictionaryBackedModel

@property (copy, nonatomic) NSString *imageID;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *imageDescription;

- (void).cxx_destruct;
- (id)validationRequirements;

@end
