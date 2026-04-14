@class NSDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface MIBUNWMessage : NSObject

@property (nonatomic) unsigned short type;
@property (retain, nonatomic) NSDictionary *payload;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *syncSemaphore;

+ (id)sharedFramer;

- (void)dealloc;
- (void).cxx_destruct;
- (id)createContent;
- (id)createContentContext;
- (id)initWithContent:(id)a0 andContext:(id)a1;
- (id)initWithType:(unsigned short)a0 andPayload:(id)a1;

@end
