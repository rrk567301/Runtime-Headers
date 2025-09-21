@class NSAttributedString;

@interface MUIManualSummary : NSObject

@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) char requiresConfirmation;
@property (readonly, nonatomic) char isExternalSummary;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSummary:(id)a0 requiresConfirmation:(char)a1 isExternalSummary:(char)a2;

@end
