@class NSString, _NSLocalizedStringResource, NSArray;

@interface WFActionParameterSummary : NSObject

@property (readonly, copy, nonatomic) _NSLocalizedStringResource *singleFormatString;
@property (readonly, copy, nonatomic) NSString *singleFormatLocalizedString;
@property (readonly, copy, nonatomic) _NSLocalizedStringResource *title;
@property (readonly, copy, nonatomic) NSArray *possibleValues;

- (id)initWithValues:(id)a0;
- (id)localizedTitle;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocalizedString:(id)a0;
- (id)localizedFormatStringWithAction:(id)a0;
- (id)initWithString:(id)a0 title:(id)a1;
- (id)initWithValues:(id)a0 title:(id)a1;

@end
