@class NSURL;

@interface OADLinkedMediaFile : OADMovie

@property (retain) NSURL *url;
@property char isExternal;

- (void).cxx_destruct;

@end
