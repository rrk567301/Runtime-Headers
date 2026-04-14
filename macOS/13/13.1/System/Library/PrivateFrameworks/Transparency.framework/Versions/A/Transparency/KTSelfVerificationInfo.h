@class NSDictionary, NSArray, NSError;

@interface KTSelfVerificationInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *uriToServerLoggableDatas;
@property (retain) NSArray *syncedLoggableDatas;
@property (retain) NSError *failure;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSyncedLoggableDatas:(id)a0 uriToServerLoggableDatas:(id)a1;

@end
