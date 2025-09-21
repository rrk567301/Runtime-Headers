@interface MNRouteEditorRequestTicket : NSObject

@property (readonly, nonatomic) char isCancelled;

- (void)cancel;

@end
