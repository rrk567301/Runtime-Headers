@class NSUUID, NSString, TUSandboxExtendedURL, TUMediaTokens;

@interface TUMomentsMediaRecordRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *callUUID;
@property (readonly, nonatomic) TUSandboxExtendedURL *sandboxURL;
@property (readonly, nonatomic) TUMediaTokens *mediaTokens;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (copy, nonatomic) NSString *localCaptionsFileName;
@property (copy, nonatomic) NSString *remoteCaptionsFileName;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCall:(id)a0 URL:(id)a1;
- (id)initWithCallUUID:(id)a0 URL:(id)a1 mediaTokens:(id)a2;
- (BOOL)isEqualToMediaRecordRequest:(id)a0;

@end
