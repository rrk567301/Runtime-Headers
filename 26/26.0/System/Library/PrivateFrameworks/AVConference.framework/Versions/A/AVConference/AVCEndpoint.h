@class NSString, NSObject;
@protocol OS_nw_endpoint;

@interface AVCEndpoint : NSObject {
    NSString *_description;
}

@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint;
@property (nonatomic) unsigned int rtpSSRC;

+ (id)newEndpointXPCDictionaryWithAVCEndpoint:(id)a0;

- (void)dealloc;
- (id)description;
- (id)initWithNWEndpoint:(id)a0;

@end
