@class NSArray;
@protocol MTLSharedEvent;

@interface CP_OBJECT_cp_swapchain : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *swapchainLinks;
@property (retain) id<MTLSharedEvent> didAllRenderEvent;
@property (retain) id<MTLSharedEvent> didApplicationOnlyRender;
@property (copy, nonatomic) id /* block */ swapchainLinkNeedsUpdate;

- (id)initPrivate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)sanitize;

@end
