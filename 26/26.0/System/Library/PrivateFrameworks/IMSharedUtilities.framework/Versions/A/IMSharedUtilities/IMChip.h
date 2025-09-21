@protocol IMAttributableContent;

@interface IMChip : NSObject <IMAttributableContent>

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) id<IMAttributableContent> chip;

+ (id)chipWithType:(long long)a0 dictionary:(id)a1;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 chip:(id)a1;

@end
