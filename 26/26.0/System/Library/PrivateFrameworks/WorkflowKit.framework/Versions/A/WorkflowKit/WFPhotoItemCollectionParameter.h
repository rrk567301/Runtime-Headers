@class NSString;

@interface WFPhotoItemCollectionParameter : WFParameter

@property (readonly, nonatomic) NSString *pickerMode;
@property (readonly, nonatomic) long long selectionLimit;
@property (readonly, nonatomic) NSString *pickerFilter;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (Class)singleStateClass;

@end
