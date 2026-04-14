@class TUSmartHoldingSession;

@interface TUSmartHoldingSessionUpdateRequest : TUSmartHoldingSessionRequest <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TUSmartHoldingSession *session;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCallUUID:(id)a0 session:(id)a1;

@end
