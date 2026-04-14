@class NFApplet, NSString;

@interface NFContactlessPaymentStartEvent : NSObject <NSSecureCoding> {
    NSString *_appletIdentifier;
    NSString *_keyIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NFApplet *applet;
@property (readonly, retain, nonatomic) NSString *keyIdentifier;
@property (readonly, nonatomic) unsigned short selectStatus;
@property (readonly, nonatomic) unsigned short paymentMode;
@property (readonly, retain, nonatomic) NSString *spIdentifier;
@property (readonly, nonatomic) BOOL background;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)setKeyIdentifier:(id)a0;
- (id)asDictionary;
- (id)appletIdentifier;
- (void)_setApplet:(id)a0;

@end
