@class NSArray;
@protocol CoreDAVACLTaskDelegate;

@interface CoreDAVACLTask : CoreDAVTask

@property (retain, nonatomic) NSArray *accessControlEntities;
@property (weak, nonatomic) id<CoreDAVACLTaskDelegate> delegate;

- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)httpMethod;
- (id)description;
- (id)initWithAccessControlEntities:(id)a0 atURL:(id)a1;

@end
