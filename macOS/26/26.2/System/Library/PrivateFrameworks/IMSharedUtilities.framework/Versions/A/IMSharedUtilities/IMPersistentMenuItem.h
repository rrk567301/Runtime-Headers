@protocol IMAttributableContent;

@interface IMPersistentMenuItem : NSObject <IMAttributableContent>

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) id<IMAttributableContent> content;

+ (id)contentWithType:(long long)a0 dictionary:(id)a1;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)dictionaryRepresentation;
- (id)initWithType:(long long)a0 content:(id)a1;

@end
