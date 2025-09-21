@class NSSet, NSString, NSMutableSet;

@interface PKExpressTransactionState : NSObject <NSCopying, NSSecureCoding> {
    unsigned char _uuid[16];
    NSMutableSet *_TCIs;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSSet *TCIs;
@property (readonly, nonatomic, getter=isExpress) BOOL express;
@property (readonly, nonatomic, getter=isProcessing) BOOL processing;
@property (readonly, nonatomic, getter=isAssociated) BOOL associated;
@property (readonly, copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, copy, nonatomic) NSString *keyIdentifier;
@property (readonly, copy, nonatomic) NSString *passUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *terminalReaderIdentifier;
@property (readonly, nonatomic) unsigned long long receivedEvents;
@property (readonly, nonatomic) long long standaloneTransactionType;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic, getter=isIgnorable) BOOL ignorable;
@property (readonly, nonatomic) BOOL transacted;

+ (id)create;
+ (id)createForExpressType:(long long)a0;
+ (id)createForStandaloneTransaction:(long long)a0 applicationIdentifier:(id)a1 keyIdentifier:(id)a2 passUniqueIdentifier:(id)a3;
+ (id)createForStandaloneTransaction:(long long)a0 applicationIdentifier:(id)a1 keyIdentifier:(id)a2 passUniqueIdentifier:(id)a3 terminalReaderIdentifier:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)resolve;
- (BOOL)isEqualToState:(id)a0;
- (void)_populatePassUniqueIdentifierWithLookup:(id /* block */)a0;
- (void)associateWithApplicationIdentifier:(id)a0 keyIdentifier:(id)a1 terminalReaderIdentifier:(id)a2 passUniqueIdentifier:(id)a3;
- (void)associateWithTCIs:(id)a0;
- (BOOL)isRelatedToState:(id)a0;
- (BOOL)mergeState:(id)a0;
- (BOOL)receiveEvents:(unsigned long long)a0;
- (BOOL)receiveStandaloneTransaction:(long long)a0;

@end
