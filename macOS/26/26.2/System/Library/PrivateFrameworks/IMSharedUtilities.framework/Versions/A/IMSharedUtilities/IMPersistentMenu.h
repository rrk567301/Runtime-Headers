@class NSString, NSArray;

@interface IMPersistentMenu : NSObject <IMAttributableContent> {
    void /* function */ displayText;
    void /* function */ items;
}

@property (nonatomic, readonly) long long level;
@property (nonatomic, readonly) NSString *displayText;
@property (nonatomic, readonly) NSArray *items;

+ (BOOL)isEmptyStamped:(id)a0;
+ (id)example;
+ (id)emptyStampProperty;
+ (id)relayEmptyStampProperty;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)dictionaryRepresentation;
- (id)initWithLevel:(long long)a0 displayText:(id)a1 items:(id)a2;
- (id)relayDictionaryRepresentation;

@end
