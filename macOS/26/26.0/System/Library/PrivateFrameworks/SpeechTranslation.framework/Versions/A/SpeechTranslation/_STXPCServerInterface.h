@class NSString, NSXPCInterface;

@interface _STXPCServerInterface : NSObject

@property (class, readonly, nonatomic) NSString *machService;
@property (class, readonly, nonatomic) NSXPCInterface *interface;

@end
