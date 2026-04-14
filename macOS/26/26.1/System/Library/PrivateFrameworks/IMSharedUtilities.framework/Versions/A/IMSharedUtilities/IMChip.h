@protocol IMAttributableContent;

@interface IMChip : NSObject <IMAttributableContent>

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) id<IMAttributableContent> chip;
@property (nonatomic, readonly) long long hash;

+ (id)chipWithType:(long long)a0 dictionary:(id)a1;

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithType:(long long)a0 chip:(id)a1;

@end
