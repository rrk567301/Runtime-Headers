@class NSArray;

@interface SODictationCommandNounSpecifier : NSObject

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) NSArray *items;

- (id)description;
- (void)dealloc;
- (id)initWithType:(unsigned int)a0 item:(id)a1;
- (id)initWithType:(unsigned int)a0 items:(id)a1;

@end
