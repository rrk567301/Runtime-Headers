@class NSAttributedString;

@interface MUIManualSummary : NSObject

@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) BOOL requiresConfirmation;
@property (readonly, nonatomic) BOOL isExternalSummary;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSummary:(id)a0 requiresConfirmation:(BOOL)a1 isExternalSummary:(BOOL)a2;

@end
