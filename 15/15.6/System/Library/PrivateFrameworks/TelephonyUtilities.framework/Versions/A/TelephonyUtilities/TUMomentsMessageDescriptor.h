@class NSUUID, TUSandboxExtendedURL;

@interface TUMomentsMessageDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *messageUUID;
@property (readonly, nonatomic) TUSandboxExtendedURL *videoURL;
@property (readonly, nonatomic) TUSandboxExtendedURL *thumbnailURL;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageUUID:(id)a0 videoURL:(id)a1 thumbnailURL:(id)a2;

@end
