@class NSNumber, NSString;

@interface IMActionShowLocation : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* function */ query;
    void /* function */ label;
    void /* function */ fallbackUrl;
}

@property (nonatomic, readonly) NSNumber *latitude;
@property (nonatomic, readonly) NSNumber *longitude;
@property (nonatomic, readonly) NSString *query;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *fallbackUrl;
@property (nonatomic, readonly) long long hash;

- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)initWithLatitude:(id)a0 longitude:(id)a1 query:(id)a2 label:(id)a3 fallbackUrl:(id)a4;

@end
