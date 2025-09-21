@class NSArray;
@protocol MTLSharedEvent;

@interface CP_OBJECT_cp_post_process_swapchain : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *links;
@property (retain) id<MTLSharedEvent> didRenderEvent;

- (id)initPrivate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
