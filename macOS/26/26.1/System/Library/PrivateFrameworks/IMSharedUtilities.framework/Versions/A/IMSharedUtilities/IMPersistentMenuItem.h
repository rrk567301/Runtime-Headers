@protocol IMAttributableContent;

@interface IMPersistentMenuItem : NSObject <IMAttributableContent>

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) id<IMAttributableContent> content;

+ (id)contentWithType:(long long)a0 dictionary:(id)a1;

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(long long)a0 content:(id)a1;

@end
