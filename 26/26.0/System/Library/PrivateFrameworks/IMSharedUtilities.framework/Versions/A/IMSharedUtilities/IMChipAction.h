@class IMChipSuggestion;
@protocol IMChipActionProtocol;

@interface IMChipAction : NSObject <IMAttributableContent>

@property (nonatomic, readonly) IMChipSuggestion *suggestion;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) id<IMChipActionProtocol> action;

+ (BOOL)actionIsSupported:(long long)a0;
+ (id)actionWithType:(long long)a0 dictionary:(id)a1;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSuggestion:(id)a0 type:(long long)a1 action:(id)a2;
- (id)suggestedActionBody;

@end
