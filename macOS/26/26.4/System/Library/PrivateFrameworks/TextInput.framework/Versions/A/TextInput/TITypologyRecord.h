@class NSUUID;

@interface TITypologyRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSUUID *recordID;

+ (id)recordClasses;

- (id)textSummary;
- (id)currentKeyboardState;
- (void)replaceDocumentState:(id)a0;
- (void)removeContextFromKeyboardState;
- (void)applyToStatistic:(id)a0;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)changedText;
- (id)textSummaryForAutocorrection:(id)a0;

@end
