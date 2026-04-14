@class DPAction, NSRegularExpression, NSArray, NSString;

@interface DPRule : NSObject

@property int ruleId;
@property (retain, nonatomic) NSRegularExpression *regex;
@property (retain, nonatomic) NSArray *captureNames;
@property (retain, nonatomic) NSArray *offsets;
@property (copy, nonatomic) NSString *modifier;
@property (retain, nonatomic) DPAction *start;
@property (retain, nonatomic) DPAction *end;

- (void).cxx_destruct;

@end
