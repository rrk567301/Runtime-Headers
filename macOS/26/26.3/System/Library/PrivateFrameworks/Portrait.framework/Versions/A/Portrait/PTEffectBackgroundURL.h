@class NSURL, NSString;

@interface PTEffectBackgroundURL : NSObject

@property (readonly) NSURL *fullsizeURL;
@property (readonly) NSURL *thumbnailURL;
@property (readonly) NSString *inputBufferChecksum;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)URLs;
- (id)initWithFullsize:(id)a0 thumbnail:(id)a1 inputBufferChecksum:(id)a2;

@end
