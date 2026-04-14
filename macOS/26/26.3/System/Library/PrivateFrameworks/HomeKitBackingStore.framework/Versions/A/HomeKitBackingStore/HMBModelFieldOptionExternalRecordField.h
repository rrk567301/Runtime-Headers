@class NSString;

@interface HMBModelFieldOptionExternalRecordField : HMBModelFieldOption

@property (readonly, nonatomic) NSString *fieldName;
@property (readonly, nonatomic) BOOL encrypted;

- (id)initWithExternalRecordField:(id)a0 encrypted:(BOOL)a1;
- (void).cxx_destruct;
- (void)applyTo:(id)a0;

@end
