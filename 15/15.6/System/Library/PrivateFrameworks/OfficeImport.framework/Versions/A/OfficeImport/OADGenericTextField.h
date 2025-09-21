@class NSString;

@interface OADGenericTextField : OADTextField

@property (copy, nonatomic) NSString *guid;
@property (copy, nonatomic) NSString *type;

- (void).cxx_destruct;
- (id)initWithGuid:(id)a0 type:(id)a1;
- (char)isSimilarToTextRun:(id)a0;

@end
