@class NSURL, NSString;

@interface PTEffectBackgroundURL : NSObject

@property (readonly) NSURL *fullsizeURL;
@property (readonly) NSURL *thumbnailURL;
@property (readonly) NSString *inputBufferChecksum;

- (id)URLs;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFullsize:(id)a0 thumbnail:(id)a1 inputBufferChecksum:(id)a2;

@end
