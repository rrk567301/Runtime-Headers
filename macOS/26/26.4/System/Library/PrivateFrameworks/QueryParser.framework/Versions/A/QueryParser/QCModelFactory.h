@class NSSet, NSCondition, NSError, NSMutableArray, NSObject;
@protocol OS_os_transaction;

@interface QCModelFactory : NSObject {
    NSCondition *_condition;
    int _state;
    NSMutableArray *_models;
    NSSet *_unsupportedLocaleIdentifiers;
    NSObject<OS_os_transaction> *_transaction;
    id /* block */ _releaseBlock;
}

@property (retain, nonatomic) NSError *loadError;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)prune;
- (id)model:(id)a0 forLocale:(id)a1 withTimeoutMS:(unsigned int)a2;
- (BOOL)modelLoaded;

@end
