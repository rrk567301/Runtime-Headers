@class NSString;

@interface IMActionOpenApp : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* function */ url;
}

@property (nonatomic, readonly) NSString *url;

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithUrl:(id)a0;

@end
