@class ABCardViewPersonMapper, CNContact;
@protocol ABCardViewProperty;

@interface ABCardViewMultiValueConverterBuilder : NSObject

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) ABCardViewPersonMapper *personMapper;
@property (retain, nonatomic) id<ABCardViewProperty> property;
@property (nonatomic) char shouldShowPrivateMeFields;
@property (nonatomic) char isEditing;

- (void).cxx_destruct;
- (id)build;
- (id)transformers;
- (id)accountNameTransformer;
- (id)basicConverter;
- (id)initWithContact:(id)a0 personMapper:(id)a1 property:(id)a2;
- (id)privateFieldTransformer;
- (id)readOnlyTransformer;

@end
