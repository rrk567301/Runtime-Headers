@class NSDictionary, NSString;

@interface TPSContextualEventBuilder : NSObject {
    void /* function */ dictionary;
    void /* unknown type, empty encoding */ eventType;
    void /* function */ stream;
}

@property (nonatomic, copy) NSDictionary *dictionary;
@property (nonatomic, copy) NSString *stream;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)contextualEvent;

@end
