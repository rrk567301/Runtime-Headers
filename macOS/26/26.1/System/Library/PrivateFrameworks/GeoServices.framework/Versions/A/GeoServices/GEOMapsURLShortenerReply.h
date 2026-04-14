@class NSURL, NSString;

@interface GEOMapsURLShortenerReply : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
