@class NSString, NSAttributedString;

@interface IMPollOption : NSObject {
    void /* function */ optionIdentifier;
    void /* function */ pollText;
}

@property (nonatomic, readonly) NSString *optionIdentifier;
@property (nonatomic, readonly) NSString *pollText;
@property (nonatomic, readonly) NSAttributedString *attributedPollText;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptionIdentifier:(id)a0 pollText:(id)a1 attributedPollText:(id)a2;

@end
