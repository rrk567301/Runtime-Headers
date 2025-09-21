@class NSString, NSSet, NSMutableSet, _CDContact;

@interface _CDAdvisedInteraction : NSObject <NSCopying, NSSecureCoding> {
    NSMutableSet *_reasons;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain) _CDContact *contact;
@property (retain) NSString *account;
@property (retain) NSString *bundleId;
@property long long mechanism;
@property double score;
@property (retain) NSSet *reasons;
@property long long similarOutgoingInteractionsCount;
@property long long similarIncomingInteractionsCount;
@property long long similarBidirectionalInteractionsCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addReason:(long long)a0;
- (void)addReasons:(id)a0;
- (id)descriptionOfReasons:(id)a0;

@end
