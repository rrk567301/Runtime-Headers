@class NSAttributedString;

@interface MUIManualSummary : NSObject

@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) BOOL requiresConfirmation;
@property (readonly, nonatomic) BOOL isExternalSummary;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithSummary:(id)a0 requiresConfirmation:(BOOL)a1 isExternalSummary:(BOOL)a2;

@end
