@protocol IMAttributableContent;

@interface IMChip : NSObject <IMAttributableContent>

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) id<IMAttributableContent> chip;
@property (nonatomic, readonly) long long hash;

+ (id)chipWithType:(long long)a0 dictionary:(id)a1;

- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(long long)a0 chip:(id)a1;

@end
