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

- (id)asDictionary;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setKeyIdentifier:(id)a0;
- (id)appletIdentifier;
- (void)_setApplet:(id)a0;

@end
