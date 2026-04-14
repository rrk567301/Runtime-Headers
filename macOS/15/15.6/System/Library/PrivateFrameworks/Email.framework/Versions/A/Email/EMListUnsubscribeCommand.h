@class NSString, EMListUnsubscribeMailtoValues, EMListUnsubscribePostValues;

@interface EMListUnsubscribeCommand : NSObject <NSSecureCoding, EFPubliclyDescribable>

@property (class, copy, nonatomic) id /* block */ accountFinderBlock;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *listID;
@property (readonly, nonatomic) BOOL isMailtoOperation;
@property (readonly, nonatomic) NSString *sender;
@property (readonly, nonatomic) NSString *senderForUnsubscribeMessage;
@property (readonly, nonatomic) long long headerUnsubscribeTypes;
@property (readonly, nonatomic) EMListUnsubscribeMailtoValues *mailtoValues;
@property (readonly, nonatomic) EMListUnsubscribePostValues *postValues;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_accountWithIdentifier:(id)a0;
+ (id)mailtoUnsubscribeCommandWithListID:(id)a0 address:(id)a1 sender:(id)a2 senderForUnsubscribeMessage:(id)a3 subject:(id)a4 body:(id)a5 account:(id)a6 headerUnsubscribeTypes:(long long)a7;
+ (id)oneClickUnsubscribeCommandWithListID:(id)a0 sender:(id)a1 senderForUnsubscribeMessage:(id)a2 URL:(id)a3 postContent:(id)a4 headerUnsubscribeTypes:(long long)a5;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithListID:(id)a0 sender:(id)a1 senderForUnsubscribeMessage:(id)a2 mailtoValues:(id)a3 postValues:(id)a4 headerUnsubscribeTypes:(long long)a5;

@end
