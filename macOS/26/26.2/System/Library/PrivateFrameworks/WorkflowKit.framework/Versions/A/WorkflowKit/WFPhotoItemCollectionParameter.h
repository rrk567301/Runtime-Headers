@class NSString;

@interface WFPhotoItemCollectionParameter : WFParameter

@property (readonly, nonatomic) NSString *pickerMode;
@property (readonly, nonatomic) long long selectionLimit;
@property (readonly, nonatomic) NSString *pickerFilter;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;

@end
