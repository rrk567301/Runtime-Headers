@class NSArray;

@interface AKSimpleProfileImagesResponse : AKDictionaryBackedModel

@property (retain, nonatomic) NSArray *imageGroups;

- (void).cxx_destruct;
- (id)description;
- (id)parseValue:(id)a0 atKey:(id)a1;
- (id)validationRequirements;

@end
