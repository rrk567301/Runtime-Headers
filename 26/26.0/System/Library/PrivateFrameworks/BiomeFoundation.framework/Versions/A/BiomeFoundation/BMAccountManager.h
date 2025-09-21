@class BMFileManager;

@interface BMAccountManager : NSObject {
    BMFileManager *_fileManager;
}

+ (id)new;

- (id)accounts;
- (id)init;
- (void).cxx_destruct;
- (id)_accountIdentifiers;
- (id)deviceIdentifiersForAccount:(id)a0;
- (id)initWithUseCase:(id)a0;

@end
