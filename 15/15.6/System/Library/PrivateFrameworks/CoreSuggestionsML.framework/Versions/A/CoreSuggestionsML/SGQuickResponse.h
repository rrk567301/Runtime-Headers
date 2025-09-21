@class NSString, NSDictionary;

@interface SGQuickResponse : NSObject

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *lang;
@property (readonly, nonatomic) unsigned long long replyTextId;
@property (readonly, nonatomic) unsigned long long styleGroupId;
@property (readonly, nonatomic) unsigned long long semanticClassId;
@property (readonly, nonatomic) unsigned long long modelId;
@property (readonly, nonatomic) unsigned long long categoryId;
@property (readonly, nonatomic) char isCustomResponse;
@property (readonly, nonatomic) char isRobotResponse;
@property (readonly, nonatomic) NSDictionary *proactiveTrigger;
@property (readonly, nonatomic) char isConfident;

- (id)description;
- (void).cxx_destruct;
- (void)setIsConfident:(char)a0;
- (id)initWithProactiveTrigger:(id)a0 isConfident:(char)a1;
- (id)initWithText:(id)a0 lang:(id)a1 replyTextId:(unsigned long long)a2 styleGroupId:(unsigned long long)a3 semanticClassId:(unsigned long long)a4 modelId:(unsigned long long)a5 categoryId:(unsigned long long)a6 isCustomResponse:(char)a7 isRobotResponse:(char)a8 isConfident:(char)a9;
- (id)initWithText:(id)a0 lang:(id)a1 replyTextId:(unsigned long long)a2 styleGroupId:(unsigned long long)a3 semanticClassId:(unsigned long long)a4 modelId:(unsigned long long)a5 categoryId:(unsigned long long)a6 isCustomResponse:(char)a7 isRobotResponse:(char)a8 isConfident:(char)a9 proactiveTrigger:(id)a10;

@end
