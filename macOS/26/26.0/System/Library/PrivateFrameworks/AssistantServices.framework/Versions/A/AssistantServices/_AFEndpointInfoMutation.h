@class NSString, AFEndpointInfo;

@interface _AFEndpointInfoMutation : NSObject <AFEndpointInfoMutating> {
    AFEndpointInfo *_base;
    NSString *_identifier;
    NSString *_mediaRouteIdentifier;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIdentifier : 1; unsigned char hasMediaRouteIdentifier : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (void)setMediaRouteIdentifier:(id)a0;
- (id)getIdentifier;
- (BOOL)isDirty;
- (id)getMediaRouteIdentifier;
- (void)setIdentifier:(id)a0;
- (void).cxx_destruct;

@end
