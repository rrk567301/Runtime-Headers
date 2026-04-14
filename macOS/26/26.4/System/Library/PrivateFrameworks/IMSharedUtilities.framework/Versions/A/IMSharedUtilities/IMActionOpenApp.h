@class NSString;

@interface IMActionOpenApp : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* function */ url;
}

@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) long long hash;

- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)initWithUrl:(id)a0;

@end
