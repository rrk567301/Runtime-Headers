@class NSDictionary;

@interface BMAccessAllowList : NSObject {
    NSDictionary *_allowed;
}

@property (class, readonly) BMAccessAllowList *systemToUserRead;
@property (class, readonly) BMAccessAllowList *systemToUserWrite;

- (id)initWithList:(id)a0;
- (void).cxx_destruct;
- (BOOL)includesIdentifier:(id)a0 useCase:(id)a1;
- (BOOL)includesProcess:(id)a0 useCase:(id)a1;

@end
