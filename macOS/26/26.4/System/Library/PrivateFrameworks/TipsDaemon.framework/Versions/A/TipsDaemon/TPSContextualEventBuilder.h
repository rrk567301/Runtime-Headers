@class NSDictionary, NSString;

@interface TPSContextualEventBuilder : NSObject {
    void /* function */ dictionary;
    void /* unknown type, empty encoding */ eventType;
    void /* function */ stream;
}

@property (nonatomic, copy) NSDictionary *dictionary;
@property (nonatomic, copy) NSString *stream;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)contextualEvent;

@end
