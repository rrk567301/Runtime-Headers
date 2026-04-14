@class NSString, NSArray;

@interface IMPersistentMenu : NSObject <IMAttributableContent> {
    void /* function */ displayText;
    void /* function */ items;
}

@property (nonatomic, readonly) long long level;
@property (nonatomic, readonly) NSString *displayText;
@property (nonatomic, readonly) NSArray *items;

+ (id)example;
+ (BOOL)isEmptyStamped:(id)a0;
+ (id)emptyStampProperty;
+ (id)relayEmptyStampProperty;

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithLevel:(long long)a0 displayText:(id)a1 items:(id)a2;
- (id)relayDictionaryRepresentation;

@end
