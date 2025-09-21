@class NSUUID;

@interface TITypologyRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSUUID *recordID;

+ (id)recordClasses;

- (id)textSummary;
- (void)replaceDocumentState:(id)a0;
- (void)removeContextFromKeyboardState;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)currentKeyboardState;
- (void)applyToStatistic:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void).cxx_destruct;
- (id)changedText;
- (id)textSummaryForAutocorrection:(id)a0;

@end
