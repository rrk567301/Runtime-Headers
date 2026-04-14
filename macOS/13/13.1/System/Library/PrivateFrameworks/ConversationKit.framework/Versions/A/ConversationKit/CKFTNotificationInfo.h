@class NSString;

@interface CKFTNotificationInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ actionButtonTitle;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *actionButtonTitle;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ appIcon;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 message:(id)a1 actionButtonTitle:(id)a2 appIcon:(id)a3;
- (id)initWithTitle:(id)a0 message:(id)a1 actionButtonTitle:(id)a2 error:(id *)a3;

@end
