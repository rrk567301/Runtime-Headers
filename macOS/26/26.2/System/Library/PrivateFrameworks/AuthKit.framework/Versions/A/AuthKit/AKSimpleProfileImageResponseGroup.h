@class NSString, NSArray;

@interface AKSimpleProfileImageResponseGroup : AKDictionaryBackedModel

@property (copy, nonatomic) NSString *groupTitle;
@property (retain, nonatomic) NSArray *images;

- (void).cxx_destruct;
- (id)parseValue:(id)a0 atKey:(id)a1;
- (id)validationRequirements;

@end
