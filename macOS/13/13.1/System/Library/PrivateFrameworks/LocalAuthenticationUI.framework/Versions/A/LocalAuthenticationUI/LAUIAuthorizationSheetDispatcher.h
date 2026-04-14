@class LAUIAuthorizationSheetWorker;
@protocol LAUIAuthorizationSheet;

@interface LAUIAuthorizationSheetDispatcher : NSObject {
    LAUIAuthorizationSheetWorker *_worker;
}

@property (retain, nonatomic) id<LAUIAuthorizationSheet> sheet;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)authorizeRights:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
