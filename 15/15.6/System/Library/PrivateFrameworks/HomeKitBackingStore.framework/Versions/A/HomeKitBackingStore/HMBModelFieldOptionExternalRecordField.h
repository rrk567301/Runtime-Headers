@class NSString;

@interface HMBModelFieldOptionExternalRecordField : HMBModelFieldOption

@property (readonly, nonatomic) NSString *fieldName;
@property (readonly, nonatomic) char encrypted;

- (void).cxx_destruct;
- (void)applyTo:(id)a0;
- (id)initWithExternalRecordField:(id)a0 encrypted:(char)a1;

@end
