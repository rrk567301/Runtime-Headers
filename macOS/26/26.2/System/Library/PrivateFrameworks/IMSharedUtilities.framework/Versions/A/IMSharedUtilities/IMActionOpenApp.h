@class NSString;

@interface IMActionOpenApp : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* function */ url;
}

@property (nonatomic, readonly) NSString *url;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)dictionaryRepresentation;
- (id)initWithUrl:(id)a0;

@end
