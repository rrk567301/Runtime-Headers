@class ABCardViewPersonMapper, CNContact;
@protocol ABCardViewProperty;

@interface ABCardViewMultiValueConverterBuilder : NSObject

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) ABCardViewPersonMapper *personMapper;
@property (retain, nonatomic) id<ABCardViewProperty> property;
@property (nonatomic) BOOL shouldShowPrivateMeFields;
@property (nonatomic) BOOL isEditing;

- (void).cxx_destruct;
- (id)build;
- (id)transformers;
- (id)basicConverter;
- (id)readOnlyTransformer;
- (id)privateFieldTransformer;
- (id)accountNameTransformer;
- (id)initWithContact:(id)a0 personMapper:(id)a1 property:(id)a2;

@end
