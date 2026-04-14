@class SPBeaconShare, NSString;

@interface SPDelegatedShareImportResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) SPBeaconShare *share;
@property (readonly, copy, nonatomic) NSString *authUrl;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithShare:(id)a0;
- (id)initWithAuthUrl:(id)a0;
- (id)initWithShare:(id)a0 authUrl:(id)a1;

@end
