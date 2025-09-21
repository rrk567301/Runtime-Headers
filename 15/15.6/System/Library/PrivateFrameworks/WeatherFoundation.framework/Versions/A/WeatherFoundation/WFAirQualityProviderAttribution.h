@class NSString, NSImage, WFAirQualityProviderStation, NSURL, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface WFAirQualityProviderAttribution : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) WFAirQualityProviderAttribution *defaultProviderAttribution;
@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long dataOrigination;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logoImageLoadingQueue;
@property (retain, nonatomic) NSMutableArray *outstandingRequestsCompletionBlocks;
@property (nonatomic) char logoRequestInFlight;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataSynchronizationLock;
@property (copy, nonatomic) NSImage *cachedLogoImage;
@property (retain, nonatomic) WFAirQualityProviderStation *station;
@property (copy, nonatomic) NSURL *logoURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_initInternal;
- (id)initWithName:(id)a0 logoImage:(id)a1 dataOrigination:(long long)a2 station:(id)a3;
- (id)initWithName:(id)a0 logoURL:(id)a1 dataOrigination:(long long)a2;
- (id)initWithName:(id)a0 logoURL:(id)a1 dataOrigination:(long long)a2 station:(id)a3;
- (void)loadLogoImageWithCompletion:(id /* block */)a0;
- (char)p_checkRequestInFlight;
- (void)p_clearRequestInFlight;
- (id)p_imageWithData:(id)a0;
- (void)p_invokeAndClearCompletionBlocksWithImage:(id)a0 error:(id)a1;
- (void)p_loadRemoteLogoImageForProvider:(id)a0 completion:(id /* block */)a1;
- (void)p_queueCompletionBlock:(id /* block */)a0;
- (void)p_setRequestInFlight;

@end
