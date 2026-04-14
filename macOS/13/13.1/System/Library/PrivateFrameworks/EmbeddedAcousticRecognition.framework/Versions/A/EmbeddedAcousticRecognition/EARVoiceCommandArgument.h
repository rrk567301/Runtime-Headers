@class NSIndexSet;

@interface EARVoiceCommandArgument : NSObject <NSCopying>

@property (readonly, nonatomic) char presence;
@property (readonly, copy, nonatomic) NSIndexSet *indexes;
@property (readonly, copy, nonatomic) NSIndexSet *adpositionIndexes;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithPresence:(char)a0 indexes:(id)a1 adpositionIndexes:(id)a2;

@end
