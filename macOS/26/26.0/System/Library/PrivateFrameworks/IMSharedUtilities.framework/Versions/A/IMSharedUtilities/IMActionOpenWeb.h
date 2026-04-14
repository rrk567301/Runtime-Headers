@class NSString;

@interface IMActionOpenWeb : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* function */ url;
    void /* function */ parameters;
}

@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) NSString *parameters;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMode:(long long)a0 url:(id)a1 parameters:(id)a2;

@end
