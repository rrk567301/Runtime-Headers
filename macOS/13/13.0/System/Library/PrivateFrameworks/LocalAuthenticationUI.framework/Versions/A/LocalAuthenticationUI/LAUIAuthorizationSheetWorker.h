@class NSString, NSArray, NSDictionary, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface LAUIAuthorizationSheetWorker : NSObject <LAUIAuthorizationSheetDelegate> {
    NSArray *_rights;
    NSDictionary *_options;
    NSNumber *_flags;
    NSDictionary *_env;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
