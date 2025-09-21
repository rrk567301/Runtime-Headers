@class NSString;

@interface STMSummaryDetails : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *summaryMessage;
@property (nonatomic) char isDestructiveAction;
@property (copy, nonatomic) NSString *actionTitle;
@property (nonatomic) char actionNeedsSheetClosing;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
