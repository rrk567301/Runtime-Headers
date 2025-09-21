@class NSUUID, NSString, NSDictionary;

@interface FMAlert : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSUUID *alertId;
@property (nonatomic) unsigned long long category;
@property (retain, nonatomic) NSString *msgTitle;
@property (retain, nonatomic) NSString *msgText;
@property (retain, nonatomic) NSString *defaultButtonTitle;
@property (retain, nonatomic) NSString *alternateButtonTitle;
@property (nonatomic) double timeout;
@property (nonatomic) char showMsgInLockScreen;
@property (nonatomic) char dismissMsgOnUnlock;
@property (nonatomic) char dismissMsgOnLock;
@property (retain, nonatomic) NSDictionary *additionalSettings;
@property (copy, nonatomic) id /* block */ defaultButtonAction;
@property (copy, nonatomic) id /* block */ alternateButtonAction;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
