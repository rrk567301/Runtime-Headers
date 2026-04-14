@class TUSmartHoldingSession;

@interface TUSmartHoldingSessionUpdateRequest : TUSmartHoldingSessionRequest <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TUSmartHoldingSession *session;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCallUUID:(id)a0 session:(id)a1;

@end
