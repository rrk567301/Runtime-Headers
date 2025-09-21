@class NSData;

@interface SecExternalPreSharedKey : NSObject

@property (retain) NSData *external_identity;
@property (retain) NSData *epsk;
@property (retain) NSData *context;

- (void).cxx_destruct;
- (id)initWithExternalIdentity:(id)a0 :(id)a1 :(id)a2;

@end
