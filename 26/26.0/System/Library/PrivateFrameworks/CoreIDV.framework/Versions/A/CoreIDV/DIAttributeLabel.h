@class NSString;

@interface DIAttributeLabel : DIAttribute <NSSecureCoding> {
    NSString *_buttonTitle;
    NSString *_detailTitle;
    NSString *_detailSubtitle;
    NSString *_detailBody;
    NSString *_businessChatButtonTitle;
    NSString *_businessChatIdentifier;
    NSString *_businessChatIntentName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *defaultValue;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *detailTitle;
@property (copy, nonatomic) NSString *detailSubtitle;
@property (copy, nonatomic) NSString *detailBody;
@property (copy, nonatomic) NSString *businessChatButtonTitle;
@property (copy, nonatomic) NSString *businessChatIdentifier;
@property (copy, nonatomic) NSString *businessChatIntentName;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
