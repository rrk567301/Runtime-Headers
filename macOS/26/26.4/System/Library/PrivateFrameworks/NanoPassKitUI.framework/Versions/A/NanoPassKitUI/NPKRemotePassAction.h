@class NPKProtoRemotePassActionEnvelope, NSString, UIImage, MSMessage;

@interface NPKRemotePassAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NPKProtoRemotePassActionEnvelope *protoEnvelope;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *passOrganizationName;
@property (readonly, nonatomic) NSString *passLocalizedDescription;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic, getter=isResponse) BOOL response;
@property (retain, nonatomic) MSMessage *underlyingMessage;
@property (readonly, nonatomic) BOOL supportsTopUp;
@property (readonly, nonatomic) BOOL supportsCommutePlanRenewal;
@property (readonly, nonatomic) unsigned long long cardType;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)_updateLayoutContentsWithImage:(id)a0;
- (id)_imageForMessage:(id)a0;
- (id)_messageDataURLWithData:(id)a0;
- (void)_updateDataURL;
- (void)_updateSummaryText;
- (id)initWithMessage:(id)a0 protoEnvelope:(id)a1 image:(id)a2;
- (id)initWithProtoEnvelope:(id)a0 image:(id)a1;
- (id)initWithUnderlyingMessage:(id)a0;

@end
