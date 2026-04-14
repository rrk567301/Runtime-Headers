@class NSString, NSDictionary, NSArray, NSData, NSNumber;

@interface PatternExecutionResult : NSObject

@property (retain, nonatomic) NSString *patternId;
@property (retain, nonatomic) NSDictionary *meta;
@property (retain, nonatomic) NSArray *dialog;
@property (retain, nonatomic) NSData *visual;
@property (retain, nonatomic) NSString *responseMode;
@property (retain, nonatomic) NSNumber *printSupportingDialog;
@property (nonatomic) unsigned long long patternType;

- (void).cxx_destruct;
- (id)visualToString;
- (id)visualToJsonDictionary;

@end
