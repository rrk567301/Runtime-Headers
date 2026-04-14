@class NSUUID, TUSandboxExtendedURL;

@interface TUMomentsMessageDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *messageUUID;
@property (readonly, nonatomic) TUSandboxExtendedURL *videoURL;
@property (readonly, nonatomic) TUSandboxExtendedURL *thumbnailURL;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessageUUID:(id)a0 videoURL:(id)a1 thumbnailURL:(id)a2;

@end
