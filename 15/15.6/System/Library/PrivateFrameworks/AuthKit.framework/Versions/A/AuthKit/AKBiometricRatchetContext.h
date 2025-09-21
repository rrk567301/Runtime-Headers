@class NSString, NSURL;

@interface AKBiometricRatchetContext : NSObject

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSString *calloutReason;
@property (readonly, nonatomic) NSURL *deeplinkURL;
@property (readonly, nonatomic) char fallbackToNoAuth;
@property (readonly, nonatomic) char notInteractive;
@property (readonly, nonatomic) char useShortExpiration;
@property (readonly, copy, nonatomic) NSString *beginRatchetTitle;
@property (readonly, copy, nonatomic) NSString *beginRatchetBody;
@property (readonly, nonatomic) char showsLocationWarning;
@property (readonly, copy, nonatomic) NSString *countdownText;
@property (readonly, copy, nonatomic) NSString *findMyErrorTitle;
@property (readonly, copy, nonatomic) NSString *findMyErrorMessage;
@property (readonly, copy, nonatomic) NSString *metaContext;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0 calloutReason:(id)a1 deeplinkURL:(id)a2 fallbackToNoAuth:(char)a3 useShortExpiration:(char)a4;
- (id)initWithReason:(id)a0 calloutReason:(id)a1 deeplinkURL:(id)a2 fallbackToNoAuth:(char)a3 useShortExpiration:(char)a4 beginRatchetTitle:(id)a5 beginRatchetBody:(id)a6 showsLocationWarning:(char)a7 countdownText:(id)a8 findMyErrorTitle:(id)a9 findMyErrorMessage:(id)a10 metaContext:(id)a11 notInteractive:(char)a12;

@end
