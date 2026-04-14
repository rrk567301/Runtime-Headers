@class CNChangeHistoryAnchor;

@interface CNIndexClientState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long indexVersion;
@property (nonatomic) BOOL isFullSyncDone;
@property (retain, nonatomic) CNChangeHistoryAnchor *snapshotAnchor;
@property (nonatomic) long long fullSyncOffset;

+ (id)clientStateWithData:(id)a0 logger:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)data;

@end
