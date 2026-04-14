@class CHSControlIdentity, NSString;

@interface CHSControlInstanceIdentity : NSObject {
    void /* function */ hostIdentifier;
    void /* function */ configurationIdentifier;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) CHSControlIdentity *control;
@property (nonatomic, readonly) NSString *hostIdentifier;
@property (nonatomic, readonly) NSString *configurationIdentifier;
@property (nonatomic, readonly) unsigned long long contentType;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithControl:(id)a0 contentType:(unsigned long long)a1 hostIdentifier:(id)a2 configurationIdentifier:(id)a3;

@end
