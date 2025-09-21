@class NSString;

@interface NWHostEndpoint : NWEndpoint

@property (readonly, nonatomic) NSString *hostname;
@property (readonly, nonatomic) NSString *port;

+ (unsigned int)endpointType;
+ (id)endpointWithHostname:(id)a0 port:(id)a1;

- (id)descriptionWithIndent:(int)a0 showFullContent:(char)a1;

@end
