@class NSXPCInterface;

@interface CNContactPosterDataXPCService : NSObject

@property (class, readonly) NSXPCInterface *interface;

+ (id)newConnection;

@end
