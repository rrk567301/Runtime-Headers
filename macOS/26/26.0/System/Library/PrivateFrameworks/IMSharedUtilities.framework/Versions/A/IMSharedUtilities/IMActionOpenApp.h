@class NSString;

@interface IMActionOpenApp : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* function */ url;
}

@property (nonatomic, readonly) NSString *url;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithUrl:(id)a0;

@end
