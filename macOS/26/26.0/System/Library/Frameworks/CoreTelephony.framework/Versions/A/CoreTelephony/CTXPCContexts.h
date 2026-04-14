@class NSArray, NSUUID;

@interface CTXPCContexts : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *subscriptions;
@property (retain, nonatomic) NSUUID *dataPreferred;
@property (retain, nonatomic) NSUUID *voicePreferred;
@property (retain, nonatomic) NSArray *existingUserSubscriptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)findForSlot:(long long)a0 within:(id)a1;
- (id)findForAccount:(id)a0;
- (id)findForUuid:(id)a0 within:(id)a1;
- (id)description;
- (id)findForUuid:(id)a0;
- (id)findForAccount:(id)a0 within:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)findForSlot:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
