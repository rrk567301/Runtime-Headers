@class NSArray;

@interface AKSimpleProfileImagesResponse : AKDictionaryBackedModel

@property (retain, nonatomic) NSArray *imageGroups;

- (id)description;
- (void).cxx_destruct;
- (id)parseValue:(id)a0 atKey:(id)a1;
- (id)validationRequirements;

@end
