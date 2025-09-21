@interface TSWPTopicNumberHintLevelData : NSObject <NSCopying>

@property (nonatomic) unsigned long long number;
@property (nonatomic) unsigned long long labelType;
@property (nonatomic) unsigned long long numberType;
@property (nonatomic) char isTiered;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (char)isEqual:(id)a0;

@end
