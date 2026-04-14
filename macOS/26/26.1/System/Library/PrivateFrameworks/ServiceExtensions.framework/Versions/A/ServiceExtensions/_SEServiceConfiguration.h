@class NSString;

@interface _SEServiceConfiguration : NSObject {
    void /* function */ serviceIdentifier;
    void /* function */ interruptionHandler;
}

@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, copy) id /* block */ interruptionHandler;

- (void).cxx_destruct;
- (id)init;
- (id)initWithServiceIdentifier:(id)a0;

@end
