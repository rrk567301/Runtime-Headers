@class NSDictionary;

@interface BMAccessAllowList : NSObject {
    NSDictionary *_allowed;
}

@property (class, readonly) BMAccessAllowList *systemToUserRead;
@property (class, readonly) BMAccessAllowList *systemToUserWrite;

- (void).cxx_destruct;
- (id)initWithList:(id)a0;
- (char)includesIdentifier:(id)a0 useCase:(id)a1;
- (char)includesProcess:(id)a0 useCase:(id)a1;

@end
