@class NSString, NSURL;

@interface CIDVUIProofingDisplayMessageAction : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ _actionURL;
    void /* function */ title;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) id _actionURL;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) NSURL *actionURL;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 actionType:(long long)a1 actionURL:(id)a2;

@end
