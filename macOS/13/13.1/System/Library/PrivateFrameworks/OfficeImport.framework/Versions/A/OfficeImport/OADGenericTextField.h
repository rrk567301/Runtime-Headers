@class NSString;

@interface OADGenericTextField : OADTextField

@property (copy, nonatomic) NSString *guid;
@property (copy, nonatomic) NSString *type;

- (void).cxx_destruct;
- (BOOL)isSimilarToTextRun:(id)a0;
- (id)initWithGuid:(id)a0 type:(id)a1;

@end
