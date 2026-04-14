@class NSString, WDDocument, NSMutableArray;

@interface WDListDefinition : NSObject <NSCopying> {
    WDDocument *mDocument;
    int mType;
    NSMutableArray *mLevels;
}

@property (readonly, nonatomic) int listDefinitionId;
@property (readonly, nonatomic) NSString *styleId;
@property (copy, nonatomic) NSString *styleRefId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setType:(int)a0;
- (void).cxx_destruct;
- (int)type;
- (id)description;
- (int)levelCount;
- (void)removeLastLevel;
- (id)addLevel;
- (id)initWithDocument:(id)a0 listDefinitionId:(int)a1 styleId:(id)a2;
- (id)levelAt:(int)a0;

@end
