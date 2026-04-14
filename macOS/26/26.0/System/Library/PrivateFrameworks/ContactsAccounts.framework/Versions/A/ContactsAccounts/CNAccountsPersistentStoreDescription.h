@class NSURL, NSString;

@interface CNAccountsPersistentStoreDescription : NSObject <CNAccountsPersistentStoreDescription> {
    void /* unknown type, empty encoding */ url;
    void /* function */ externalIdentifier;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) BOOL isReadOnly;
@property (nonatomic, readonly) NSString *externalIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 isReadOnly:(BOOL)a1 externalIdentifier:(id)a2;

@end
