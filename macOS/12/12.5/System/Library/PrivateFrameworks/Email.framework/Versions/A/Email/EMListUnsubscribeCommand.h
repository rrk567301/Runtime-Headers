@class NSString, EMListUnsubscribeCommandMessageHeaders, NSURL;
@protocol EDReceivingAccount;

@interface EMListUnsubscribeCommand : NSObject <NSSecureCoding, EFPubliclyDescribable> {
    id<EDReceivingAccount> _account;
    NSString *_accountIdentifier;
}

@property (class, copy, nonatomic) id /* block */ accountFinderBlock;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isMailtoOperation;
@property (readonly, nonatomic) long long headerFlags;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *body;
@property (readonly, nonatomic) id<EDReceivingAccount> account;
@property (readonly, nonatomic) EMListUnsubscribeCommandMessageHeaders *originalMessageHeaders;
@property (readonly, nonatomic) NSURL *oneClickURL;
@property (readonly, nonatomic) NSString *postContent;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mailtoUnsubscribeCommandWithAddress:(id)a0 subject:(id)a1 body:(id)a2 account:(id)a3 headers:(id)a4 headerFlags:(long long)a5;
+ (id)oneClickUnsubscribeCommandWithURL:(id)a0 postContent:(id)a1 account:(id)a2 headers:(id)a3 headerFlags:(long long)a4;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_accountWithIdentifier:(id)a0;
- (id)initWithAddress:(id)a0 subject:(id)a1 body:(id)a2 URL:(id)a3 postContent:(id)a4 account:(id)a5 headers:(id)a6 headerFlags:(long long)a7 isMailto:(BOOL)a8;
- (void)_commonInitWithAddress:(id)a0 subject:(id)a1 body:(id)a2 URL:(id)a3 postContent:(id)a4;

@end
