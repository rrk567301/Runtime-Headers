@class CHSControlIdentity, NSError;
@protocol WFUserInterfaceHost;

@interface WFAppIntentsControlMetadata : NSObject

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) CHSControlIdentity *identity;

- (void).cxx_destruct;
- (id)init;
- (void)presentIfPossibleInUserInterface:(id<WFUserInterfaceHost>)a0 completionBlock:(void (^)(NSError *))a1;

@end
