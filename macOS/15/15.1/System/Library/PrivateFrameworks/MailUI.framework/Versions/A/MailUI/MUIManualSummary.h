@class NSAttributedString;

@interface MUIManualSummary : NSObject

@property (copy, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) BOOL requiresConfirmation;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSummary:(id)a0 requiresConfirmation:(BOOL)a1;

@end
